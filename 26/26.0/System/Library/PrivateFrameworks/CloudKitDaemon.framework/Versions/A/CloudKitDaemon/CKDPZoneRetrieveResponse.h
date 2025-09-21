@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos;

+ (Class)zoneSummaryType;
+ (Class)anonymousZoneInfoType;

- (unsigned long long)zoneSummarysCount;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearAnonymousZoneInfos;
- (id)dictionaryRepresentation;
- (void)addZoneSummary:(id)a0;
- (unsigned long long)anonymousZoneInfosCount;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addAnonymousZoneInfo:(id)a0;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)clearZoneSummarys;
- (void).cxx_destruct;

@end
