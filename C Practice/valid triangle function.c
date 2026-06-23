bool valid_triangle(float x, float y, float z)
{

    if (x <= 0 || y <= 0 || z <= 0)
    {
        return fasle;
    }

    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }

        return true;
}
