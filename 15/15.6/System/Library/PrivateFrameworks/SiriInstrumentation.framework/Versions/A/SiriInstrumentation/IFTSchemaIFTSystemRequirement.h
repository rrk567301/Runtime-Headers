@class IFTSchemaIFTSystemRequirementProtectedAppRequest, IFTSchemaIFTSystemRequirementAuthenticationRequest, IFTSchemaIFTSystemRequirementUserLocationForSystemRequest, NSData;

@interface IFTSchemaIFTSystemRequirement : SISchemaInstrumentationMessage

@property (nonatomic) char deviceUnlockRequired;
@property (nonatomic) char hasDeviceUnlockRequired;
@property (nonatomic) char authenticationRequired;
@property (nonatomic) char hasAuthenticationRequired;
@property (nonatomic) char appLaunchRequired;
@property (nonatomic) char hasAppLaunchRequired;
@property (nonatomic) char carPlayIncompatible;
@property (nonatomic) char hasCarPlayIncompatible;
@property (nonatomic) char carBluetoothIncompatible;
@property (nonatomic) char hasCarBluetoothIncompatible;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirementProtectedAppRequest *protectedAppApprovalRequired;
@property (nonatomic) char hasProtectedAppApprovalRequired;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirementAuthenticationRequest *userAuthenticationRequired;
@property (nonatomic) char hasUserAuthenticationRequired;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirementUserLocationForSystemRequest *userLocationForSystemRequired;
@property (nonatomic) char hasUserLocationForSystemRequired;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Systemrequirement;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAppLaunchRequired;
- (void)deleteAuthenticationRequired;
- (void)deleteCarBluetoothIncompatible;
- (void)deleteCarPlayIncompatible;
- (void)deleteDeviceUnlockRequired;
- (void)deleteProtectedAppApprovalRequired;
- (void)deleteUserAuthenticationRequired;
- (void)deleteUserLocationForSystemRequired;
- (id)suppressMessageUnderConditions;

@end
