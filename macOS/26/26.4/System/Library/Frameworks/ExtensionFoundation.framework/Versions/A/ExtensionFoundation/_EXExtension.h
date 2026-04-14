@class NSString, _EXExtensionIdentity;

@interface _EXExtension : NSObject

@property (readonly) NSString *bundleIdentifier;
@property BOOL hasSwiftEntryPoint;
@property (retain, nonatomic) _EXExtensionIdentity *identity;
@property (retain, nonatomic) id strongDelegate;
@property (readonly) struct { unsigned int x0[8]; } hostAuditToken;
@property (readonly) Class delegateClass;
@property (weak, nonatomic) id delegate;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (Class)delegateClass;
- (void).cxx_destruct;
- (void)didFinishLaunching;
- (id)bundleIdentifier;
- (void)handleConnection:(id)a0;
- (BOOL)loadDelegate;
- (BOOL)shouldAcceptInternalConnection:(id)a0;
- (id)makeSceneWithConfiguration:(id)a0;
- (void)prepareForSceneConnectionWithConfiguration:(id)a0;

@end
