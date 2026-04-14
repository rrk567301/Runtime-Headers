@class NSMutableDictionary;

@interface BRCUploadV1PerformanceTracker : NSObject {
    NSMutableDictionary *_itemsToSignpostTracker;
    unsigned long long _maxCapacity;
}

- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithCapacity:(unsigned long long)a0;
- (void)_stopTrackingItemWithIdentifier:(id)a0 endEvent:(BOOL)a1;
- (void)cancelTrackingItemWithIdentifier:(id)a0;
- (void)finishTrackingItemWithIdentifier:(id)a0;
- (void)startTrackingItemWithIdentifier:(id)a0;

@end
