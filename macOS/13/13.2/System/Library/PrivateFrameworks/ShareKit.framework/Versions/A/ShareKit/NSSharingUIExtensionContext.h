@class SHKServiceCompletionInfo, SHKSharingViewService, NSViewController;
@protocol NSSharingPlugInViewControllerProtocol;

@interface NSSharingUIExtensionContext : NSSharingExtensionContext

@property (weak) SHKSharingViewService *viewService;
@property (weak) NSViewController<NSSharingPlugInViewControllerProtocol> *viewController;
@property (retain) SHKServiceCompletionInfo *completionInfo;

+ (BOOL)shouldDimSourceWindow;

- (void).cxx_destruct;
- (void)cancel;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelRequestWithError:(id)a0;
- (id)title;
- (void)performServiceWithOptionsDictionaryData:(id)a0 completion:(id /* block */)a1;
- (void)cancelServiceUI;
- (void)closeServiceWindowWithSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (id)displayState;
- (void)setDisplayState:(id)a0;
- (BOOL)serviceNeedsUserConfiguration;
- (BOOL)hasNarrowLayout;
- (Class)accountDelegateClass;
- (void)startUserConfiguration;
- (BOOL)disableWindowPresentation;
- (void)prepareUIWithCompletionBlock:(id /* block */)a0;
- (void)_endServicePrematurely;
- (void)_endServicePrematurelyWithViewService:(id)a0;
- (void)_serviceWindowDidShowWithViewService:(id)a0;
- (void)_reallyCompleteRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reallyCancelRequestWithError:(id)a0;
- (id)previewItemSupportedTypes;
- (id)imageForItem:(id)a0;
- (void)getPreviewImageForAttachments:(id)a0 block:(id /* block */)a1 timeoutBlock:(id /* block */)a2;
- (BOOL)_fadesOutSuccessfulClosingAnimation;

@end
