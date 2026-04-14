@class NSView;

@interface PMmacOSPlayerView : NSView

@property (weak, nonatomic) NSView *playerView;
@property (nonatomic) BOOL shouldBlockFirstResponder;

- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;

@end
