@class NSSet, NSString, RMModelAppManagedDeclaration_InstallBehaviorLicense, NSNumber;

@interface RMModelAppManagedDeclaration_InstallBehavior : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadInstall;
@property (copy, nonatomic) RMModelAppManagedDeclaration_InstallBehaviorLicense *payloadLicense;
@property (copy, nonatomic) NSNumber *payloadVersion;
@property (copy, nonatomic) NSString *payloadAllowDownloadsOverCellular;

+ (id)buildRequiredOnly;
+ (id)buildWithInstall:(id)a0 license:(id)a1 version:(id)a2 allowDownloadsOverCellular:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
