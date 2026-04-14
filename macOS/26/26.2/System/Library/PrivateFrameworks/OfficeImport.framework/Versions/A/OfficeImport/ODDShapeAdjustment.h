@interface ODDShapeAdjustment : NSObject {
    unsigned int mIndex;
    double mValue;
}

- (unsigned int)index;
- (void)setValue:(double)a0;
- (id)description;
- (double)value;
- (void)setIndex:(unsigned int)a0;

@end
