@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (int)operatorType;
- (id)description;
- (void)setScale:(int)a0;
- (void)setValue:(double)a0;
- (int)scale;
- (void)setOperatorType:(int)a0;
- (double)value;
- (void)setFilterValue:(double)a0;
- (double)filterValue;

@end
