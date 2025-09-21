@interface MFPBlurEffect : MFPEffect {
    float mRadius;
    char mExpandEdge;
}

+ (id)GUID;

- (id)initWithRadius:(float)a0 expandEdge:(char)a1;

@end
