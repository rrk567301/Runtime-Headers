@class NSDictionary, NSMutableDictionary;
@protocol SHKHostExtensionContextProtocol, NSSharingExtensionContextSessionCompletionDelegate;

@interface NSSharingExtensionContext : NSExtensionContext {
    NSMutableDictionary *_parameters;
    id<NSSharingExtensionContextSessionCompletionDelegate> _sessionCompletionDelegate;
}

@property (retain) id<SHKHostExtensionContextProtocol> host;
@property (retain) NSDictionary *options;
@property (retain) NSDictionary *sandboxExtensionTokens;
@property unsigned long long status;

+ (void)initialize;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)assertBundleInformationIsComplete;

- (void).cxx_destruct;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelRequestWithError:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)parameters;
- (id)serviceDictionary;
- (id)clientAppID;
- (void)performServiceWithOptionsDictionaryData:(id)a0 completion:(id /* block */)a1;
- (void)cancelServiceUI;
- (void)closeServiceWindowWithSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (void)startSessionTeardownByCallingContinuationBlock:(id /* block */)a0;
- (void)handleSharingOptions:(id)a0;
- (void)storeParameterValue:(id)a0 forKey:(id)a1;
- (BOOL)clientAppIsBackgroundOnly;
- (long long)sharingContentScope;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceWindowFrame;
- (BOOL)hasSourceWindow;
- (BOOL)sourceWindowIsFullscreen;
- (void)setSessionCompletionDelegate:(id)a0;
- (id)sessionCompletionDelegate;
- (void)performService;
- (void)SHK_invalidate;
- (void)serviceDidCompleteWithSuccess:(BOOL)a0 error:(id)a1 items:(id)a2 completionHandler:(id /* block */)a3;
- (id)extensionItem;
- (id)displayState;
- (void)setDisplayState:(id)a0;

@end
