@class NSString, HDCodableMessageVersion, NSData, HDCodableSyncIdentity;

@interface HDCodableFHIRResource : PBCodable <NSCopying> {
    struct { unsigned char extractionHints : 1; unsigned char firstSeenDate : 1; unsigned char originVersionMajor : 1; unsigned char originVersionMinor : 1; unsigned char originVersionPatch : 1; unsigned char receivedDate : 1; } _has;
}

@property (readonly, nonatomic) char hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (readonly, nonatomic) char hasResourceID;
@property (retain, nonatomic) NSString *resourceID;
@property (readonly, nonatomic) char hasRawContent;
@property (retain, nonatomic) NSData *rawContent;
@property (nonatomic) char hasReceivedDate;
@property (nonatomic) double receivedDate;
@property (readonly, nonatomic) char hasResourceType;
@property (retain, nonatomic) NSString *resourceType;
@property (readonly, nonatomic) char hasFhirVersion;
@property (retain, nonatomic) NSString *fhirVersion;
@property (readonly, nonatomic) char hasReceivedDateTimeZoneName;
@property (retain, nonatomic) NSString *receivedDateTimeZoneName;
@property (readonly, nonatomic) char hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic) char hasExtractionHints;
@property (nonatomic) long long extractionHints;
@property (readonly, nonatomic) char hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) char hasOriginVersionMajor;
@property (nonatomic) long long originVersionMajor;
@property (nonatomic) char hasOriginVersionMinor;
@property (nonatomic) long long originVersionMinor;
@property (nonatomic) char hasOriginVersionPatch;
@property (nonatomic) long long originVersionPatch;
@property (readonly, nonatomic) char hasOriginVersionBuild;
@property (retain, nonatomic) NSString *originVersionBuild;
@property (readonly, nonatomic) char hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (nonatomic) char hasFirstSeenDate;
@property (nonatomic) double firstSeenDate;
@property (readonly, nonatomic) char hasFirstSeenDateTimeZoneName;
@property (retain, nonatomic) NSString *firstSeenDateTimeZoneName;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (readonly, nonatomic) char hasUniquenessChecksum;
@property (retain, nonatomic) NSData *uniquenessChecksum;

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
