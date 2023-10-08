using System;
class Program
{
    static void Main(string[] args)
    {
        // Declara una lista de cadenas
        string[] aves = { "loro gris", "paloma de diamante", "coctel" };

        Console.WriteLine("Los valores de la lista antes de insertar:");
        foreach (string ave in aves)
        {
            Console.Write(ave + " ");
        }

        Console.WriteLine("\n");

        // Agrega tres valores al final de la lista utilizando el método Array.Resize()
        Array.Resize(ref aves, aves.Length + 3);
        aves[aves.Length - 3] = "mayna";
        aves[aves.Length - 2] = "periquitos";
        aves[aves.Length - 1] = "cacatua";

        Console.WriteLine("Los valores de la lista después de insertar:");
        foreach (string ave in aves)
        {
            Console.Write(ave + " ");
        }

        Console.WriteLine("\n");
    }
}