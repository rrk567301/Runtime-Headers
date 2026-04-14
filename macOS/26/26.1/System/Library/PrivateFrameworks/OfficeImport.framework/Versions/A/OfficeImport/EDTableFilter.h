@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (void)setValue:(double)a0;
- (int)scale;
- (int)operatorType;
- (double)value;
- (void)setOperatorType:(int)a0;
- (id)description;
- (void)setScale:(int)a0;
- (void)setFilterValue:(double)a0;
- (double)filterValue;

@end
