@interface CHDArea3DType : CHDArea2DType {
    int mGapDepth;
}

+ (BOOL)is3DType;

- (id)initWithChart:(id)a0;
- (int)gapDepth;
- (void)setGapDepth:(int)a0;

@end
