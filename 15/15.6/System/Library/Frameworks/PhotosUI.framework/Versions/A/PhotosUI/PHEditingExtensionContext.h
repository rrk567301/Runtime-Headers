@class PUEditingExtensionUndoAdapter, NSUndoManager, NSNumber, PUEditingInitialPayload;

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor> {
    NSNumber *_fullSizeImageSandboxExtensionHandleWrapper;
    NSNumber *_videoPathSandboxExtensionHandleWrapper;
}

@property (readonly) PUEditingInitialPayload *_initialPayload;
@property (retain, nonatomic) PUEditingExtensionUndoAdapter *undoAdapter;
@property (nonatomic) char attemptUndoManagerAutoSetup;
@property (retain, nonatomic) NSUndoManager *undoManagerForBarButtons;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_contentEditingController;
- (void)_releaseSandboxExtensions;
- (void)beginContentEditingWithCompletionHandler:(id /* block */)a0;
- (void)cancelContentEditingWithResponseHandler:(id /* block */)a0;
- (void)finishContentEditing;
- (void)queryHandlingCapabilityForAdjustmentData:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)querySDKVersionWithResponseHandler:(id /* block */)a0;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)a0;
- (void)setHideNavigationController:(char)a0;
- (void)setupUndoProxyWithXPCListenerEndpoint:(id)a0 attemptUndoManagerAutoSetup:(char)a1;

@end
