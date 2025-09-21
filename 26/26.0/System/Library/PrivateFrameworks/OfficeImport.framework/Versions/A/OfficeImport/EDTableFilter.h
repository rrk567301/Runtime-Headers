@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (int)operatorType;
- (void)setValue:(double)a0;
- (double)value;
- (int)scale;
- (void)setScale:(int)a0;
- (void)setOperatorType:(int)a0;
- (id)description;
- (void)setFilterValue:(double)a0;
- (double)filterValue;

@end
