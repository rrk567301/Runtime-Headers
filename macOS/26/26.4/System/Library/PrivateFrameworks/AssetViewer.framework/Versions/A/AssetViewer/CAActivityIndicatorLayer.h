@interface CAActivityIndicatorLayer : CALayer {
    struct CGColor { } *_color;
}

@property (readonly, nonatomic, getter=_spokeCount) long long spokeCount;
@property (readonly, nonatomic, getter=_spokeFrameRatio) long long spokeFrameRatio;

- (BOOL)isAnimating;
- (void)startAnimating;
- (void)stopAnimating;
- (id)init;
- (id)spinnerImages;

@end
