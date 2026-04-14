@class NSString;

@interface VisualTabPickerTransitionPerformanceTracker : NSObject {
    NSString *_currentTransitionPerformanceKey;
}

- (void)startInteractiveTransition;
- (void)endTransition;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_startTransitionWithPerformanceKey:(id)a0;
- (void)startNonInteractiveTransitionWithDestination:(float)a0;

@end
