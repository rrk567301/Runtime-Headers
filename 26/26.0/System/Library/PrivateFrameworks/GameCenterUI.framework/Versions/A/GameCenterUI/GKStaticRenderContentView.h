@class NSView;

@interface GKStaticRenderContentView : NSView

@property (retain, nonatomic) NSView *contentView;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)prepareToReuseSubviewsOfView:(id)a0;

@end
