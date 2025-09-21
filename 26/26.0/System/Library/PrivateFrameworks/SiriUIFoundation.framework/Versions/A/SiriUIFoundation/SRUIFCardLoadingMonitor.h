@class NSMutableArray;

@interface SRUIFCardLoadingMonitor : NSObject {
    NSMutableArray *_observers;
}

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)broadcastVisualResponseSnippet:(id)a0;
- (void)broadcastCardSnippet:(id)a0;
- (BOOL)isTrackingObserver:(id)a0;

@end
