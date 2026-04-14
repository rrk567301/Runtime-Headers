@class NTPBTagMetadata, NSMutableArray;

@interface NTPBArticleTagMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (retain, nonatomic) NTPBTagMetadata *channelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)clearTopicTagMetadatas;
- (id)description;
- (id)topicTagMetadataAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addTopicTagMetadata:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)topicTagMetadatasCount;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
