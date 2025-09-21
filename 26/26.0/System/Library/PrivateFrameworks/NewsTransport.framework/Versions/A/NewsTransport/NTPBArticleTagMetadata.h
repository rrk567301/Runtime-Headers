@class NTPBTagMetadata, NSMutableArray;

@interface NTPBArticleTagMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (retain, nonatomic) NTPBTagMetadata *channelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTopicTagMetadata:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearTopicTagMetadatas;
- (id)topicTagMetadataAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)topicTagMetadatasCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
