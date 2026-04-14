@class NSArray, NSString, _EXExtensionInstanceIdentifier, _EXExtensionIdentity;
@protocol _EXExtensionRepresenting;

@interface _EXHostConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) id<_EXExtensionRepresenting> extension;
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (copy) id /* block */ interruptionHandler;
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy) NSArray *preferredLanguages;
@property (copy) NSString *sandboxProfileName;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0;
- (id)initWithExtensionIdentity:(id)a0;
- (id)initWithExtensionIdentity:(id)a0 instanceIdentifier:(id)a1;
- (id)initWithExtension:(id)a0 instanceIdentifier:(id)a1;
- (id)rbsProcessIdentity;

@end
