@class NSString, NSMutableArray, NSData;

@interface HDCloudSyncCodableSharedSummaryTransactionRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasSourceDeviceIdentifier;
@property (retain, nonatomic) NSString *sourceDeviceIdentifier;
@property (retain, nonatomic) NSMutableArray *summaryIdentifiers;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) NSData *metadata;

+ (Class)summaryIdentifiersType;

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
- (void)addSummaryIdentifiers:(id)a0;
- (void)clearSummaryIdentifiers;
- (id)summaryIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)summaryIdentifiersCount;

@end
