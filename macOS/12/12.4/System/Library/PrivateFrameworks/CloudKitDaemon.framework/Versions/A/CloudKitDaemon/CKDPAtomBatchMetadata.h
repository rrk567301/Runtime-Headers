@class NSString, CKDPProtectionInfo, NSData, CKDPDistributedTimestamps;

@interface CKDPAtomBatchMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasEncryptedTimestamps;
@property (retain, nonatomic) NSData *encryptedTimestamps;
@property (readonly, nonatomic) BOOL hasTimestamps;
@property (retain, nonatomic) CKDPDistributedTimestamps *timestamps;
@property (readonly, nonatomic) BOOL hasTimestampsAuthTag;
@property (retain, nonatomic) NSData *timestampsAuthTag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
