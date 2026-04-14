@class NSObject, NSString, DEExtensionHostContext, NSMutableArray, NSExtension;
@protocol OS_dispatch_queue;

@interface DEExtension : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) NSMutableArray *contextFetchHandlers;
@property BOOL isFetchingExtensionHostContext;
@property BOOL adoptsExtensionTrackerFlow;
@property long long callCount;
@property (retain, nonatomic) NSString *attachmentsName;
@property (retain, nonatomic) NSString *identifier;
@property (retain) DEExtensionHostContext *context;
@property (nonatomic) BOOL isLoggingEnabled;
@property (retain, nonatomic) NSString *loggingConsent;
@property (nonatomic) BOOL allowUserAttachmentSelection;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNSExtension:(id)a0;
- (void)attachmentsForParameters:(id)a0 andHandler:(id /* block */)a1;
- (void)setupWithParameters:(id)a0 session:(id)a1 expirationDate:(id)a2;
- (void)setupWithParameters:(id)a0 session:(id)a1;
- (void)teardownWithParameters:(id)a0 session:(id)a1;
- (BOOL)checkAndTeardown;
- (void)attachmentListWithHandler:(id /* block */)a0;
- (void)createExtensionHostContextCompletion:(id /* block */)a0;
- (void)performWithHostContext:(id /* block */)a0;
- (void)endUsingExtension;
- (Class)extensionTrackerClass;

@end
