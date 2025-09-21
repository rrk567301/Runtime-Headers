@class NSString, CKDPProtectionInfo, NSData, CKDPDistributedTimestamps, NSMutableArray;

@interface CKDPMergeableDeltaMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) char hasEncryptedTimestamps;
@property (retain, nonatomic) NSData *encryptedTimestamps;
@property (readonly, nonatomic) char hasTimestamps;
@property (retain, nonatomic) CKDPDistributedTimestamps *timestamps;
@property (readonly, nonatomic) char hasTimestampsAuthTag;
@property (retain, nonatomic) NSData *timestampsAuthTag;
@property (retain, nonatomic) NSMutableArray *replacedDeltaIdentifiers;

+ (Class)replacedDeltaIdentifiersType;

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
- (void)addReplacedDeltaIdentifiers:(id)a0;
- (void)clearReplacedDeltaIdentifiers;
- (id)replacedDeltaIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)replacedDeltaIdentifiersCount;

@end
