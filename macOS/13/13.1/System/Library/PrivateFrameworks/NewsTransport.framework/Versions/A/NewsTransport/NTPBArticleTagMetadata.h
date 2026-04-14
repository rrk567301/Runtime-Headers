@class NTPBTagMetadata, NSMutableArray;

@interface NTPBArticleTagMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (retain, nonatomic) NTPBTagMetadata *channelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTopicTagMetadatas;
- (void)addTopicTagMetadata:(id)a0;
- (unsigned long long)topicTagMetadatasCount;
- (id)topicTagMetadataAtIndex:(unsigned long long)a0;

@end
