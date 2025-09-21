@class NSString, NSMutableArray;

@interface NTPBBundleIDMappingBundleID : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)channelTagsType;
+ (Class)sectionTagsType;
+ (Class)topicTagsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
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
