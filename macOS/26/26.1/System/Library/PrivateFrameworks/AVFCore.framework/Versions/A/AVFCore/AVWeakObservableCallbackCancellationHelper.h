@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray *_callbackRegistrations;
}

- (void)cancelAllCallbacks;
- (void)addCallbackToCancel:(id)a0;
- (void)dealloc;
- (id)init;

@end
