@interface NSVB_ViewAnimationAttributes : NSObject <NSSecureCoding> {
    unsigned char _windowFrameAnimationInProgress : 1;
    unsigned char _allowsImplicitAnimation : 1;
    unsigned char _hasTimingFunctionControlPoints : 1;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char hasTimingFunctionControlPoints;
@property (nonatomic) struct { float p[2]; } c1;
@property (nonatomic) struct { float p[2]; } c2;
@property double duration;
@property char allowsImplicitAnimation;
@property char windowFrameAnimationInProgress;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
