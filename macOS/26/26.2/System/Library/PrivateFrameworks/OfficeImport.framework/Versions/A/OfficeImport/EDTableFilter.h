@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (int)scale;
- (void)setOperatorType:(int)a0;
- (int)operatorType;
- (void)setValue:(double)a0;
- (id)description;
- (double)value;
- (void)setScale:(int)a0;
- (void)setFilterValue:(double)a0;
- (double)filterValue;

@end
