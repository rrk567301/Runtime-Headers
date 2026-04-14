@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (id)description;
- (int)operatorType;
- (int)scale;
- (void)setValue:(double)a0;
- (double)value;
- (void)setScale:(int)a0;
- (void)setOperatorType:(int)a0;
- (void)setFilterValue:(double)a0;
- (double)filterValue;

@end
