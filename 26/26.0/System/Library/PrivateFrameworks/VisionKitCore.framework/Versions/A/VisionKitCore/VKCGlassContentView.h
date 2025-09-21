@protocol VKCGlassContentViewDelegate;

@interface VKCGlassContentView : NSView

@property (weak, nonatomic) id<VKCGlassContentViewDelegate> delegate;

- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;

@end
