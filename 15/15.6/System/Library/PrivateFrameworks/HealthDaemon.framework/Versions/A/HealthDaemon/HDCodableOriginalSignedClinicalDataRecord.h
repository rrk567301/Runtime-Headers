@class NSString, HDCodableMessageVersion, NSData, HDCodableMetadataDictionary, NSMutableArray, HDCodableSyncIdentity;

@interface HDCodableOriginalSignedClinicalDataRecord : PBCodable <NSCopying> {
    struct { unsigned char firstSeenDate : 1; unsigned char lastModifiedDate : 1; unsigned char receivedDate : 1; unsigned char signatureStatus : 1; unsigned char sourceType : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) char hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (readonly, nonatomic) char hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (readonly, nonatomic) char hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (readonly, nonatomic) char hasIssuerIdentifier;
@property (retain, nonatomic) NSString *issuerIdentifier;
@property (readonly, nonatomic) char hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (readonly, nonatomic) char hasRawContent;
@property (retain, nonatomic) NSData *rawContent;
@property (retain, nonatomic) NSMutableArray *types;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadata;
@property (nonatomic) char hasReceivedDate;
@property (nonatomic) double receivedDate;
@property (readonly, nonatomic) char hasReceivedDateTimeZoneName;
@property (retain, nonatomic) NSString *receivedDateTimeZoneName;
@property (nonatomic) char hasFirstSeenDate;
@property (nonatomic) double firstSeenDate;
@property (readonly, nonatomic) char hasFirstSeenDateTimeZoneName;
@property (retain, nonatomic) NSString *firstSeenDateTimeZoneName;
@property (nonatomic) char hasSignatureStatus;
@property (nonatomic) long long signatureStatus;
@property (readonly, nonatomic) char hasUniquenessChecksum;
@property (retain, nonatomic) NSData *uniquenessChecksum;
@property (nonatomic) char hasLastModifiedDate;
@property (nonatomic) double lastModifiedDate;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;
@property (nonatomic) char hasSourceType;
@property (nonatomic) long long sourceType;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

+ (Class)typeType;

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
- (void)addType:(id)a0;
- (void)clearTypes;
- (unsigned long long)typesCount;
- (id)typeAtIndex:(unsigned long long)a0;

@end
