@class NSString, NSExtensionContext, NSViewController, NSTimer, NSExtension;
@protocol _ASExtensionHostContext;

@interface _ASExtensionViewController : NSViewController <_ASExtensionHostContextDelegate> {
    NSViewController *_remoteViewController;
    NSTimer *_nonUIRequestTimer;
    char _allowRequestingUIFromNonUIRequest;
}

@property (readonly, nonatomic) NSExtensionContext<_ASExtensionHostContext> *nonUIHostContext;
@property (readonly, nonatomic) NSExtension *extension;
@property (nonatomic) char dismissOnBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithExtension:(id)a0;
- (void)_beginNonUIRequest:(char)a0 connectionHandler:(id /* block */)a1;
- (void)_beginRequestWithConnectionHandler:(id /* block */)a0;
- (void)_extensionRequestDidFinish:(char)a0;
- (void)_invalidateNonUIRequestTimerIfNeeded;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_nonUIRequestTimedOut;
- (void)_requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (void)_setRemoteViewController:(id)a0;
- (char)_shouldUseNonUIRequestTimer;
- (void)prepareToCancelRequestWithHostContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;

@end
