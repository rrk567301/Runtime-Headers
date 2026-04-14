@class NSSet, NSNumber, NSString;

@interface RMModelExampleCombineDeclaration_DictionaryCombine : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadNumberMin;
@property (copy, nonatomic) NSString *payloadEnumHighest;

+ (id)buildRequiredOnly;
+ (id)buildWithNumberMin:(id)a0 enumHighest:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
