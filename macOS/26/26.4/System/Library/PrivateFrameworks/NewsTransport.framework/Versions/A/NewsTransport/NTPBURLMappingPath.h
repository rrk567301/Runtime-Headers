@class NSString, NSMutableArray;

@interface NTPBURLMappingPath : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)channelTagsType;
+ (Class)sectionTagsType;
+ (Class)topicTagsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addChannelTags:(id)a0;
- (void)addSectionTags:(id)a0;
- (void)addTopicTags:(id)a0;
- (id)channelTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)channelTagsCount;
- (void)clearChannelTags;
- (void)clearSectionTags;
- (void)clearTopicTags;
- (id)sectionTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionTagsCount;
- (id)topicTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicTagsCount;

@end
