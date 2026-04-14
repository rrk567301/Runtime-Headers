@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (void)setScale:(int)a0;
- (int)operatorType;
- (void)setOperatorType:(int)a0;
- (double)value;
- (id)description;
- (void)setValue:(double)a0;
- (int)scale;
- (void)setFilterValue:(double)a0;
- (double)filterValue;

@end
