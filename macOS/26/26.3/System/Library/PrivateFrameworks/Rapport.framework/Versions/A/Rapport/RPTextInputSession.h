@class NSString, RTIInputSystemSourceSession, NSObject;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPTextInputSession : NSObject <RTIInputSystemPayloadDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _started;
}

@property (retain, nonatomic) id<RPMessageable> messenger;
@property (readonly, nonatomic) RTIInputSystemSourceSession *rtiSession;
@property (copy, nonatomic) id /* block */ rtiUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)performDocumentRequest:(id)a0 completion:(id /* block */)a1;
- (void)_invalidate;
- (void)handleTextActionPayload:(id)a0;
- (void)_handleTextInputChange:(id)a0 started:(BOOL)a1;
- (void)_handleTextInputStarted:(id)a0;
- (void)_handleTextInputStopped:(id)a0;

@end
