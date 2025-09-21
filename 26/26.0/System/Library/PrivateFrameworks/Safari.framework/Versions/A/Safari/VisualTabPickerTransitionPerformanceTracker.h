@class NSString;

@interface VisualTabPickerTransitionPerformanceTracker : NSObject {
    NSString *_currentTransitionPerformanceKey;
}

- (void)startInteractiveTransition;
- (void)dealloc;
- (void)endTransition;
- (void).cxx_destruct;
- (void)_startTransitionWithPerformanceKey:(id)a0;
- (void)startNonInteractiveTransitionWithDestination:(float)a0;

@end
