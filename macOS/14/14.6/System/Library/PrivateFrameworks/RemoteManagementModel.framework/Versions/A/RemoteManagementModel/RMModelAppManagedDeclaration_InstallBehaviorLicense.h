@class NSSet, NSString;

@interface RMModelAppManagedDeclaration_InstallBehaviorLicense : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadVPPType;

+ (id)buildRequiredOnly;
+ (id)buildWithVPPType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
