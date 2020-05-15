using System;
using CLI;
using System.IO;
namespace Sandbox
{
    class Program
    {
        static void Main(string[] args)
        {
            Entity e = new Entity("The Wallman", 20, 35);
            //e.Move(5, -10);
            //Console.WriteLine(e.XPosition + " " + e.YPosition);
            double val;
            while (true)
            {
                /*
                Console.WriteLine("type x:");
                if (double.TryParse(Console.ReadLine(), out val))
                {
                    Console.WriteLine("x^2 = " + e.square(val));                    
                }*/

                /*
                Console.WriteLine("type x:");
                if (double.TryParse(Console.ReadLine(), out val))
                {
                    Console.WriteLine("ccsin(x) = " + e.ccsin(val));
                }*/
                /*
                Console.WriteLine("type x:");
                if (double.TryParse(Console.ReadLine(), out val))
                {
                    Console.WriteLine("My array = " + string.Join("\t",e.GetVec()));
                }*/
                Console.WriteLine("type x:");
                if (double.TryParse(Console.ReadLine(), out val))
                {
                    Console.WriteLine("My array = " + string.Join("\t", e.GetArray(val)));
                }
                
            }
        }
    }
}