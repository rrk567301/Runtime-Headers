@class NSString;

@interface SLDShareableContentService : NSObject <SLDService, SLDShareableContentServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (id)remoteObjectProtocol;
+ (void)setupInterface:(id)a0;

- (void)dealloc;
- (id)init;
- (void)loadDataRepresentationFromSourceIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)retrieveShareableContentMetadataWithCompletion:(id /* block */)a0;
- (void)presentMessageComposeSheetForSourceIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)allowsConnection:(id)a0;
- (int)processIdentifierForBundleIdentifier:(id)a0;
- (id)sendAppleEventToProcessWithIdentifier:(int)a0 forAction:(id)a1 error:(id *)a2;
- (void)performAction:(id)a0 onApplicationWithBundleIdentifier:(id)a1;
- (id)_applicationIdentifierForConnection:(id)a0;

@end
