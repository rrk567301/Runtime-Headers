@class NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicConversionStats;
@property (readonly, nonatomic) char hasChannelConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *channelConversionStats;
@property (readonly, nonatomic) char hasGlobalConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;

+ (Class)topicConversionStatsType;

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
- (void)addTopicConversionStats:(id)a0;
- (void)clearTopicConversionStats;
- (id)topicConversionStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicConversionStatsCount;

@end
