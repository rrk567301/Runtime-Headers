@interface ODDShapeAdjustment : NSObject {
    unsigned int mIndex;
    double mValue;
}

- (id)description;
- (void)setIndex:(unsigned int)a0;
- (unsigned int)index;
- (double)value;
- (void)setValue:(double)a0;

@end
