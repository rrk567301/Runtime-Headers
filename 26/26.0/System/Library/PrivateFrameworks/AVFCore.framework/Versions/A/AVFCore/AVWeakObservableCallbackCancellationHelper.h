@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray *_callbackRegistrations;
}

- (void)addCallbackToCancel:(id)a0;
- (void)dealloc;
- (void)cancelAllCallbacks;
- (id)init;

@end
