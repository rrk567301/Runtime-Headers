@class AVAssetWriterInputPassDescription, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _stoppedResponding;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    char _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    id /* block */ _callbackBlock;
}

- (void)dealloc;
- (id)init;
- (char)_hasStoppedResponding;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (id)initWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)respondToNewPassDescription:(id)a0;
- (void)stopRespondingToPassDescriptions;

@end
