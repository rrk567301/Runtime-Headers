@class NSString, NSMutableArray;

@interface NTPBBundleIDMappingBundleID : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)topicTagsType;
+ (Class)channelTagsType;
+ (Class)sectionTagsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTopicTags:(id)a0;
- (void)addChannelTags:(id)a0;
- (void)addSectionTags:(id)a0;
- (void)clearTopicTags;
- (unsigned long long)topicTagsCount;
- (id)topicTagsAtIndex:(unsigned long long)a0;
- (void)clearChannelTags;
- (unsigned long long)channelTagsCount;
- (id)channelTagsAtIndex:(unsigned long long)a0;
- (void)clearSectionTags;
- (unsigned long long)sectionTagsCount;
- (id)sectionTagsAtIndex:(unsigned long long)a0;

@end
