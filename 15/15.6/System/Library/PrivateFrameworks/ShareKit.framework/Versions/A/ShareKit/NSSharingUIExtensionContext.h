@class SHKServiceCompletionInfo, SHKSharingViewService, NSViewController;
@protocol NSSharingPlugInViewControllerProtocol;

@interface NSSharingUIExtensionContext : NSSharingExtensionContext

@property (weak) SHKSharingViewService *viewService;
@property (weak) NSViewController<NSSharingPlugInViewControllerProtocol> *viewController;
@property (retain) SHKServiceCompletionInfo *completionInfo;

+ (char)shouldDimSourceWindow;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelRequestWithError:(id)a0;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)title;
- (id)displayState;
- (char)hasNarrowLayout;
- (void)cancelServiceUI;
- (void)_endServicePrematurely;
- (void)_endServicePrematurelyWithViewService:(id)a0;
- (char)_fadesOutSuccessfulClosingAnimation;
- (void)_reallyCancelRequestWithError:(id)a0;
- (void)_reallyCompleteRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)_serviceWindowDidShowWithViewService:(id)a0;
- (Class)accountDelegateClass;
- (void)closeServiceWindowWithSuccess:(char)a0 completion:(id /* block */)a1;
- (char)disableWindowPresentation;
- (void)getPreviewImageForAttachments:(id)a0 block:(id /* block */)a1 timeoutBlock:(id /* block */)a2;
- (id)imageForItem:(id)a0;
- (void)performServiceWithOptionsDictionaryData:(id)a0 completion:(id /* block */)a1;
- (void)prepareUIWithCompletionBlock:(id /* block */)a0;
- (id)previewItemSupportedTypes;
- (char)serviceNeedsUserConfiguration;
- (void)setDisplayState:(id)a0;
- (void)startUserConfiguration;

@end
