@interface FMFWildcardGestureRecognizer : NSGestureRecognizer

@property (copy, nonatomic) id /* block */ pressureCallback;
@property (copy, nonatomic) id /* block */ touchesBeganCallback;
@property (copy, nonatomic) id /* block */ touchesEndedCallback;

- (void)mouseUp:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;

@end
