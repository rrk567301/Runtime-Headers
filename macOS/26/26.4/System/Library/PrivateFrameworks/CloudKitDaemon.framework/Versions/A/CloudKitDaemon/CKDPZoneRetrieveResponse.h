@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos;

+ (Class)zoneSummaryType;
+ (Class)anonymousZoneInfoType;

- (void)clearAnonymousZoneInfos;
- (unsigned long long)zoneSummarysCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearZoneSummarys;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (unsigned long long)anonymousZoneInfosCount;
- (BOOL)readFrom:(id)a0;
- (void)addAnonymousZoneInfo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addZoneSummary:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
