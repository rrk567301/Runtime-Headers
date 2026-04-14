@interface CAActivityIndicatorLayer : CALayer {
    struct CGColor { } *_color;
}

@property (readonly, nonatomic, getter=_spokeCount) long long spokeCount;
@property (readonly, nonatomic, getter=_spokeFrameRatio) long long spokeFrameRatio;

- (void)stopAnimating;
- (BOOL)isAnimating;
- (id)init;
- (void)startAnimating;
- (id)spinnerImages;

@end
