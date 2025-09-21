@class IFTSchemaIFTSystemRequirementProtectedAppRequest, IFTSchemaIFTSystemRequirementAuthenticationRequest, IFTSchemaIFTSystemRequirementUserLocationForSystemRequest, NSData;

@interface IFTSchemaIFTSystemRequirement : SISchemaInstrumentationMessage

@property (nonatomic) BOOL deviceUnlockRequired;
@property (nonatomic) BOOL hasDeviceUnlockRequired;
@property (nonatomic) BOOL authenticationRequired;
@property (nonatomic) BOOL hasAuthenticationRequired;
@property (nonatomic) BOOL appLaunchRequired;
@property (nonatomic) BOOL hasAppLaunchRequired;
@property (nonatomic) BOOL carPlayIncompatible;
@property (nonatomic) BOOL hasCarPlayIncompatible;
@property (nonatomic) BOOL carBluetoothIncompatible;
@property (nonatomic) BOOL hasCarBluetoothIncompatible;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirementProtectedAppRequest *protectedAppApprovalRequired;
@property (nonatomic) BOOL hasProtectedAppApprovalRequired;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirementAuthenticationRequest *userAuthenticationRequired;
@property (nonatomic) BOOL hasUserAuthenticationRequired;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirementUserLocationForSystemRequest *userLocationForSystemRequired;
@property (nonatomic) BOOL hasUserLocationForSystemRequired;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Systemrequirement;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAppLaunchRequired;
- (void)deleteAuthenticationRequired;
- (void)deleteCarBluetoothIncompatible;
- (void)deleteCarPlayIncompatible;
- (void)deleteDeviceUnlockRequired;
- (void)deleteProtectedAppApprovalRequired;
- (void)deleteUserAuthenticationRequired;
- (void)deleteUserLocationForSystemRequired;

@end
