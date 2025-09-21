@class NSObject, NSNumber, NSString, DEExtensionHostContext, NSMutableArray, NSExtension;
@protocol OS_dispatch_queue;

@interface DEExtension : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) NSMutableArray *contextFetchHandlers;
@property BOOL isFetchingExtensionHostContext;
@property BOOL adoptsExtensionTrackerFlow;
@property long long callCount;
@property (retain) NSNumber *cachedRequiresDataClassBAccessToRun;
@property (retain, nonatomic) NSString *attachmentsName;
@property (retain, nonatomic) NSString *identifier;
@property (retain) DEExtensionHostContext *context;
@property (readonly, nonatomic) BOOL isLoggingEnabled;
@property (nonatomic) BOOL allowUserAttachmentSelection;
@property (retain, nonatomic) NSString *loggingConsent;

- (void)attachmentsForParameters:(id)a0 withProgressHandler:(id /* block */)a1 andHandler:(id /* block */)a2;
- (void)installLoggingProfileWithSessionID:(id)a0;
- (void)endUsingExtension;
- (id)loggingProfileURLsFromExtension;
- (void)teardownWithParameters:(id)a0 session:(id)a1;
- (void)dealloc;
- (void)createExtensionHostContextCompletion:(id /* block */)a0;
- (void)annotatedAttachmentsForParameters:(id)a0 andHandler:(id /* block */)a1;
- (void)attachmentListWithHandler:(id /* block */)a0;
- (BOOL)checkAndTeardown;
- (id)initWithNSExtension:(id)a0;
- (void)removeLoggingProfileWithSessionID:(id)a0;
- (id)localizedDataCollectedSummaryWithLocalization:(id)a0;
- (BOOL)requiresDataClassBAccessToRun;
- (void)setupWithParameters:(id)a0 session:(id)a1 expirationDate:(id)a2;
- (void)setupWithParameters:(id)a0 session:(id)a1;
- (void)performWithHostContext:(id /* block */)a0;
- (id)description;
- (void)accessBundleWithSynchronousHandler:(id /* block */)a0;
- (void)attachmentsForParameters:(id)a0 andHandler:(id /* block */)a1;
- (Class)extensionTrackerClass;
- (id)_localizedTextFromLocalizedStringKey:(id)a0 fallbackFileContentsKey:(id)a1 localization:(id)a2;
- (id)_fileContentsFromPlistWithKey:(id)a0 localization:(id)a1;
- (id)localizedConsentTextWithLocalization:(id)a0;
- (id)localizedDataCollectedExplanationWithLocalization:(id)a0;
- (id)_localizedStringFromPlistWithKey:(id)a0 localization:(id)a1;
- (void).cxx_destruct;

@end
