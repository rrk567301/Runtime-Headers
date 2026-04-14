@interface IPAStraightenOperator : IPAGeometryOperator {
    double _zAngle;
}

+ (id)operatorWithIdentifier:(id)a0 angleZ:(double)a1;
+ (id)operatorWithAngleZ:(double)a0;

- (id)description;
- (id)transformForGeometry:(id)a0;

@end
