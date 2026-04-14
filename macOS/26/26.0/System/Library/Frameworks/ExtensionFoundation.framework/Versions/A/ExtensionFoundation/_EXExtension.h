@class NSString, _EXExtensionIdentity;

@interface _EXExtension : NSObject

@property (readonly) NSString *bundleIdentifier;
@property BOOL hasSwiftEntryPoint;
@property (retain, nonatomic) _EXExtensionIdentity *identity;
@property (retain, nonatomic) id strongDelegate;
@property (readonly) struct { unsigned int x0[8]; } hostAuditToken;
@property (readonly) Class delegateClass;
@property (weak, nonatomic) id delegate;

- (id)bundleIdentifier;
- (void)didFinishLaunching;
- (Class)delegateClass;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (void).cxx_destruct;
- (void)handleConnection:(id)a0;
- (BOOL)loadDelegate;
- (id)makeSceneWithConfiguration:(id)a0;
- (void)prepareForSceneConnectionWithConfiguration:(id)a0;

@end
