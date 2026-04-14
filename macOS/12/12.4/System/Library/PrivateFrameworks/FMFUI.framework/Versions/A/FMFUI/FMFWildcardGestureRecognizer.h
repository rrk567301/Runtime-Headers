@interface FMFWildcardGestureRecognizer : NSGestureRecognizer

@property (copy, nonatomic) id /* block */ pressureCallback;
@property (copy, nonatomic) id /* block */ touchesBeganCallback;
@property (copy, nonatomic) id /* block */ touchesEndedCallback;

- (id)init;
- (void).cxx_destruct;
- (void)pressureChangeWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)magnifyWithEvent:(id)a0;

@end
