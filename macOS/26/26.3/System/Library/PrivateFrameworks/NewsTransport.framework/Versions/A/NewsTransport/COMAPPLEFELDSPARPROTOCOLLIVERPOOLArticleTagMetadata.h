@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleTagMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *channelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

- (id)topicTagMetadataAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)topicTagMetadatasCount;
- (void)clearTopicTagMetadatas;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addTopicTagMetadata:(id)a0;

@end
