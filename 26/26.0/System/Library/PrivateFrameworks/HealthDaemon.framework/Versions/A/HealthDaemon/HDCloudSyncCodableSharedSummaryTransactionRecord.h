@class NSString, NSMutableArray, NSData;

@interface HDCloudSyncCodableSharedSummaryTransactionRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasSourceDeviceIdentifier;
@property (retain, nonatomic) NSString *sourceDeviceIdentifier;
@property (retain, nonatomic) NSMutableArray *summaryIdentifiers;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;

+ (Class)summaryIdentifiersType;

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
- (void)addSummaryIdentifiers:(id)a0;
- (void)clearSummaryIdentifiers;
- (id)summaryIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)summaryIdentifiersCount;

@end
