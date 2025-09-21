@class NSString, HDCodableMessageVersion, NSData, HDCodableSyncIdentity;

@interface HDCodableClinicalAccount : PBCodable <NSCopying> {
    struct { unsigned char clinicalSharingFirstSharedDate : 1; unsigned char clinicalSharingLastSharedDate : 1; unsigned char clinicalSharingMultiDeviceStatus : 1; unsigned char clinicalSharingUserStatus : 1; unsigned char creationDate : 1; unsigned char failedFetchAttemptsCount : 1; unsigned char lastFailedFetchDate : 1; unsigned char lastFetchDate : 1; unsigned char lastFullFetchDate : 1; unsigned char modificationDate : 1; unsigned char userEnabled : 1; } _has;
}

@property (readonly, nonatomic) char hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (nonatomic) char hasUserEnabled;
@property (nonatomic) char userEnabled;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) char hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) char hasLastFetchDate;
@property (nonatomic) double lastFetchDate;
@property (readonly, nonatomic) char hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) char hasLastFullFetchDate;
@property (nonatomic) double lastFullFetchDate;
@property (readonly, nonatomic) char hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) char hasPatientHash;
@property (retain, nonatomic) NSString *patientHash;
@property (readonly, nonatomic) char hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (readonly, nonatomic) char hasSignedClinicalDataIssuerIdentifier;
@property (retain, nonatomic) NSString *signedClinicalDataIssuerIdentifier;
@property (nonatomic) char hasClinicalSharingFirstSharedDate;
@property (nonatomic) double clinicalSharingFirstSharedDate;
@property (nonatomic) char hasClinicalSharingLastSharedDate;
@property (nonatomic) double clinicalSharingLastSharedDate;
@property (nonatomic) char hasClinicalSharingUserStatus;
@property (nonatomic) long long clinicalSharingUserStatus;
@property (nonatomic) char hasClinicalSharingMultiDeviceStatus;
@property (nonatomic) long long clinicalSharingMultiDeviceStatus;
@property (readonly, nonatomic) char hasClinicalSharingPrimaryDeviceName;
@property (retain, nonatomic) NSString *clinicalSharingPrimaryDeviceName;
@property (nonatomic) char hasLastFailedFetchDate;
@property (nonatomic) double lastFailedFetchDate;
@property (nonatomic) char hasFailedFetchAttemptsCount;
@property (nonatomic) long long failedFetchAttemptsCount;
@property (readonly, nonatomic) char hasCredentialSyncIdentifier;
@property (retain, nonatomic) NSData *credentialSyncIdentifier;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
