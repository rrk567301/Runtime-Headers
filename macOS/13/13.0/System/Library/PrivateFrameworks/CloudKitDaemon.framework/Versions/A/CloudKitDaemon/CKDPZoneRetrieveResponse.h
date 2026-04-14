@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos;

+ (Class)zoneSummaryType;
+ (Class)anonymousZoneInfoType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearZoneSummarys;
- (void)addZoneSummary:(id)a0;
- (unsigned long long)zoneSummarysCount;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;
- (void)clearAnonymousZoneInfos;
- (void)addAnonymousZoneInfo:(id)a0;
- (unsigned long long)anonymousZoneInfosCount;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)a0;

@end
