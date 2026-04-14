@class NSSet, NSString, NSArray, NSNumber;

@interface RMModelStatusPackageList : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSNumber *statusRemoved;
@property (copy, nonatomic) NSString *statusDeclarationIdentifier;
@property (copy, nonatomic) NSString *statusName;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSString *statusState;
@property (copy, nonatomic) NSArray *statusReasons;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 removed:(id)a1 declarationIdentifier:(id)a2 name:(id)a3 version:(id)a4 state:(id)a5 reasons:(id)a6;
+ (id)statusItemType;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isArrayValue;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
