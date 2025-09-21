@class NTPBTagMetadata, NSMutableArray;

@interface NTPBArticleTagMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasChannelTagMetadata;
@property (retain, nonatomic) NTPBTagMetadata *channelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTopicTagMetadata:(id)a0;
- (void)clearTopicTagMetadatas;
- (id)topicTagMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)topicTagMetadatasCount;

@end
