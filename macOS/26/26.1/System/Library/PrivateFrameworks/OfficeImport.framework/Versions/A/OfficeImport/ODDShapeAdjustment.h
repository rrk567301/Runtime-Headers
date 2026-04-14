@interface ODDShapeAdjustment : NSObject {
    unsigned int mIndex;
    double mValue;
}

- (unsigned int)index;
- (void)setIndex:(unsigned int)a0;
- (void)setValue:(double)a0;
- (double)value;
- (id)description;

@end
