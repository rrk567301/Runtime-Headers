@class NSString, NSMutableArray;

@interface NTPBURLMappingPath : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)topicTagsType;
+ (Class)channelTagsType;
+ (Class)sectionTagsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTopicTags;
- (void)addTopicTags:(id)a0;
- (unsigned long long)topicTagsCount;
- (id)topicTagsAtIndex:(unsigned long long)a0;
- (void)clearChannelTags;
- (void)addChannelTags:(id)a0;
- (unsigned long long)channelTagsCount;
- (id)channelTagsAtIndex:(unsigned long long)a0;
- (void)clearSectionTags;
- (void)addSectionTags:(id)a0;
- (unsigned long long)sectionTagsCount;
- (id)sectionTagsAtIndex:(unsigned long long)a0;

@end
