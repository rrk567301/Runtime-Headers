@class _EXPersona, NSArray, RBSProcessIdentity, NSDictionary, NSString, _EXExtensionIdentity, _EXExtensionInstanceIdentifier;
@protocol _EXExtensionRepresenting;

@interface _EXHostConfiguration : NSObject <NSCopying> {
    void /* function */ interruptionHandler;
    void /* function */ preferredLanguages;
    void /* function */ additionalEnvironmentVariables;
    void /* function */ sandboxProfileName;
    void /* function */ assertionAttributes;
    void /* unknown type, empty encoding */ networkApplicationID;
}

@property (nonatomic, readonly) RBSProcessIdentity *rbsProcessIdentity;
@property (nonatomic, retain) id<_EXExtensionRepresenting> extension;
@property (nonatomic, retain) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSDictionary *additionalEnvironmentVariables;
@property (nonatomic, copy) NSString *sandboxProfileName;
@property (nonatomic, retain) _EXPersona *launchPersona;
@property (nonatomic, copy) NSArray *assertionAttributes;
@property (nonatomic) BOOL requireInvalidation;
@property (nonatomic, readonly) NSString *description;

- (id)initWithExtension:(id)a0 instanceIdentifier:(id)a1;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithExtensionIdentity:(id)a0;
- (id)initWithExtension:(id)a0;
- (id)initWithExtensionIdentity:(id)a0 instanceIdentifier:(id)a1;
- (void).cxx_destruct;

@end
