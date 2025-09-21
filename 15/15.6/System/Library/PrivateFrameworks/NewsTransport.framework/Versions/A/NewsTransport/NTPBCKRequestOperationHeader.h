@class NSString, NSData, NTPBCKIdentifier, NTPBCKLocale;

@interface NTPBCKRequestOperationHeader : PBCodable <NSCopying> {
    struct { unsigned char applicationConfigVersion : 1; unsigned char deviceFlowControlBudget : 1; unsigned char deviceFlowControlBudgetCap : 1; unsigned char deviceProtocolVersion : 1; unsigned char globalConfigVersion : 1; unsigned char operationGroupQuantity : 1; unsigned char applicationContainerEnvironment : 1; unsigned char deviceFlowControlRegeneration : 1; unsigned char isolationLevel : 1; unsigned char targetDatabase : 1; unsigned char deviceSoftwareIsAppleInternal : 1; } _has;
}

@property (readonly, nonatomic) char hasApplicationContainer;
@property (retain, nonatomic) NSString *applicationContainer;
@property (readonly, nonatomic) char hasApplicationBundle;
@property (retain, nonatomic) NSString *applicationBundle;
@property (readonly, nonatomic) char hasApplicationVersion;
@property (retain, nonatomic) NSString *applicationVersion;
@property (nonatomic) char hasApplicationConfigVersion;
@property (nonatomic) unsigned long long applicationConfigVersion;
@property (nonatomic) char hasGlobalConfigVersion;
@property (nonatomic) unsigned long long globalConfigVersion;
@property (readonly, nonatomic) char hasDeviceIdentifier;
@property (retain, nonatomic) NTPBCKIdentifier *deviceIdentifier;
@property (readonly, nonatomic) char hasDeviceSoftwareVersion;
@property (retain, nonatomic) NSString *deviceSoftwareVersion;
@property (readonly, nonatomic) char hasDeviceHardwareVersion;
@property (retain, nonatomic) NSString *deviceHardwareVersion;
@property (readonly, nonatomic) char hasDeviceLibraryName;
@property (retain, nonatomic) NSString *deviceLibraryName;
@property (readonly, nonatomic) char hasDeviceLibraryVersion;
@property (retain, nonatomic) NSString *deviceLibraryVersion;
@property (readonly, nonatomic) char hasDeviceFlowControlKey;
@property (retain, nonatomic) NSString *deviceFlowControlKey;
@property (nonatomic) char hasDeviceFlowControlBudget;
@property (nonatomic) unsigned long long deviceFlowControlBudget;
@property (nonatomic) char hasDeviceFlowControlBudgetCap;
@property (nonatomic) unsigned long long deviceFlowControlBudgetCap;
@property (nonatomic) char hasDeviceFlowControlRegeneration;
@property (nonatomic) float deviceFlowControlRegeneration;
@property (nonatomic) char hasDeviceProtocolVersion;
@property (nonatomic) unsigned long long deviceProtocolVersion;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NTPBCKLocale *locale;
@property (readonly, nonatomic) char hasMmcsProtocolVersion;
@property (retain, nonatomic) NSString *mmcsProtocolVersion;
@property (nonatomic) char hasApplicationContainerEnvironment;
@property (nonatomic) int applicationContainerEnvironment;
@property (readonly, nonatomic) char hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (readonly, nonatomic) char hasDeviceAssignedName;
@property (retain, nonatomic) NSString *deviceAssignedName;
@property (readonly, nonatomic) char hasDeviceHardwareID;
@property (retain, nonatomic) NSString *deviceHardwareID;
@property (nonatomic) char hasTargetDatabase;
@property (nonatomic) int targetDatabase;
@property (readonly, nonatomic) char hasUserIDContainerID;
@property (retain, nonatomic) NSString *userIDContainerID;
@property (nonatomic) char hasIsolationLevel;
@property (nonatomic) int isolationLevel;
@property (readonly, nonatomic) char hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) char hasOperationGroupQuantity;
@property (nonatomic) unsigned long long operationGroupQuantity;
@property (nonatomic) char hasDeviceSoftwareIsAppleInternal;
@property (nonatomic) char deviceSoftwareIsAppleInternal;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
