@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray *_callbackRegistrations;
}

- (void)cancelAllCallbacks;
- (id)init;
- (void)addCallbackToCancel:(id)a0;
- (void)dealloc;

@end
