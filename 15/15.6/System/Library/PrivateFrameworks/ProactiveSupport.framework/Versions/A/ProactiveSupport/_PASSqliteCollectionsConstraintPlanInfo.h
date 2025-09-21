@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject {
    char _unique;
    char _omit;
    double _estimatedRows;
    double _estimatedCost;
}

- (id)initWithEstimatedRows:(double)a0 estimatedCost:(double)a1 unique:(char)a2 omit:(char)a3;

@end
