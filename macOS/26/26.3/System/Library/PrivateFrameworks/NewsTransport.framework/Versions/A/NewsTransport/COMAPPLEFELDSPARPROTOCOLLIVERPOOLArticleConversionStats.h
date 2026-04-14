@class NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicConversionStats;
@property (readonly, nonatomic) BOOL hasChannelConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *channelConversionStats;
@property (readonly, nonatomic) BOOL hasGlobalConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;

+ (Class)topicConversionStatsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearTopicConversionStats;
- (BOOL)isEqual:(id)a0;
- (void)addTopicConversionStats:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)topicConversionStatsCount;
- (id)topicConversionStatsAtIndex:(unsigned long long)a0;

@end
