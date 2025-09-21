@class NSString, CKDPProtectionInfo, NSData, CKDPDistributedTimestamps, NSMutableArray;

@interface CKDPMergeableDeltaMetadata : PBCodable <NSCopying>

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
@property (retain, nonatomic) NSMutableArray *replacedDeltaIdentifiers;

+ (Class)replacedDeltaIdentifiersType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addReplacedDeltaIdentifiers:(id)a0;
- (void)clearReplacedDeltaIdentifiers;
- (id)replacedDeltaIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)replacedDeltaIdentifiersCount;

@end
