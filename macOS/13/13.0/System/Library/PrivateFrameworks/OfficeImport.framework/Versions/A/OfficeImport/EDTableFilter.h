@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (id)description;
- (double)value;
- (int)scale;
- (void)setValue:(double)a0;
- (int)operatorType;
- (void)setScale:(int)a0;
- (void)setOperatorType:(int)a0;
- (double)filterValue;
- (void)setFilterValue:(double)a0;

@end
