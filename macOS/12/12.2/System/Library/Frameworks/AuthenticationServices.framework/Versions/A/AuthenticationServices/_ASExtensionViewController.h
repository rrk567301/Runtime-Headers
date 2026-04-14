@class NSString, NSExtensionContext, NSViewController, NSTimer, NSExtension;
@protocol _ASExtensionHostContext;

@interface _ASExtensionViewController : NSViewController <_ASExtensionHostContextDelegate> {
    NSViewController *_remoteViewController;
    NSTimer *_nonUIRequestTimer;
    BOOL _allowRequestingUIFromNonUIRequest;
}

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSExtensionContext<_ASExtensionHostContext> *nonUIHostContext;
@property (nonatomic) BOOL dismissOnBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithExtension:(id)a0;
- (void)prepareToCancelRequestWithHostContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_beginRequestWithConnectionHandler:(id /* block */)a0;
- (void)_requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateNonUIRequestTimerIfNeeded;
- (void)_extensionRequestDidFinish:(BOOL)a0;
- (void)_setRemoteViewController:(id)a0;
- (BOOL)_shouldUseNonUIRequestTimer;
- (void)_nonUIRequestTimedOut;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_beginNonUIRequest:(BOOL)a0 connectionHandler:(id /* block */)a1;

@end
