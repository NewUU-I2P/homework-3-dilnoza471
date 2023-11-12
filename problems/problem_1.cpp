float problemSolution1(float consumed_water) {
    float cost = 0;
    if (consumed_water >0) cost = 13;
    if (consumed_water <= 30) cost += 0.4*consumed_water;
    else if (consumed_water<=50) cost += 12+(consumed_water-30)*0.12;
    else if (consumed_water<=60) cost += 14.4 + (consumed_water-50)*1.4;
    else cost += 28.4+(consumed_water-60)*1.5;
    return cost;
}
