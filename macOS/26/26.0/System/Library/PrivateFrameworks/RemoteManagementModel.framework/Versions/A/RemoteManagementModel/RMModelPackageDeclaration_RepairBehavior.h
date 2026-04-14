@class NSSet, NSString;

@interface RMModelPackageDeclaration_RepairBehavior : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadCheckScript;
@property (copy, nonatomic) NSString *payloadRepairScript;

+ (id)buildRequiredOnlyWithCheckScript:(id)a0 repairScript:(id)a1;
+ (id)buildWithCheckScript:(id)a0 repairScript:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
