@protocol VKCGlassContentViewDelegate;

@interface VKCGlassContentView : NSView

@property (weak, nonatomic) id<VKCGlassContentViewDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;

@end
