@interface ODDShapeAdjustment : NSObject {
    unsigned int mIndex;
    double mValue;
}

- (void)setIndex:(unsigned int)a0;
- (id)description;
- (unsigned int)index;
- (void)setValue:(double)a0;
- (double)value;

@end
