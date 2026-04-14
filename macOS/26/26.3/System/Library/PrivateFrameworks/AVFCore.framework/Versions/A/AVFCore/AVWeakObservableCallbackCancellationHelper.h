@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray *_callbackRegistrations;
}

- (id)init;
- (void)addCallbackToCancel:(id)a0;
- (void)cancelAllCallbacks;
- (void)dealloc;

@end
