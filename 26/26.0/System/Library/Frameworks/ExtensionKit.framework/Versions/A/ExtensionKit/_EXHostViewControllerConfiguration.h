@class _EXExtensionInstanceIdentifier, NSString, _EXExtensionIdentity;
@protocol _EXExtensionRepresenting;

@interface _EXHostViewControllerConfiguration : _EXHostViewControllerSessionConfiguration <NSCopying>

@property (nonatomic) long long sizeBridgingOptions;
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (nonatomic) BOOL retryOnHostingFailure;
@property (nonatomic) BOOL beginHostingImmediately;
@property (retain, nonatomic) id<_EXExtensionRepresenting> extension;
@property (retain, nonatomic) NSString *role;

- (void)setSceneIdentifier:(id)a0;
- (void)setRole:(id)a0;
- (id)sceneIdentifier;
- (id)role;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithExtensionIdentity:(id)a0;
- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 role:(id)a1;

@end
