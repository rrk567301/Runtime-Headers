@class NSString, NSMutableArray;

@interface NTPBTodayPersonalizationEvent : PBCodable <NSCopying> {
    struct { unsigned char createdAt : 1; unsigned char groupType : 1; unsigned char orderInGroup : 1; unsigned char overallOrder : 1; unsigned char sectionOrder : 1; unsigned char action : 1; } _has;
}

@property (nonatomic) char hasAction;
@property (nonatomic) int action;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (retain, nonatomic) NSMutableArray *headlineTopics;
@property (readonly, nonatomic) char hasHeadlinePublisher;
@property (retain, nonatomic) NSString *headlinePublisher;
@property (nonatomic) char hasCreatedAt;
@property (nonatomic) double createdAt;
@property (nonatomic) char hasOrderInGroup;
@property (nonatomic) long long orderInGroup;
@property (nonatomic) char hasOverallOrder;
@property (nonatomic) long long overallOrder;
@property (nonatomic) char hasSectionOrder;
@property (nonatomic) long long sectionOrder;
@property (readonly, nonatomic) char hasPersonalizationSectionFeatureId;
@property (retain, nonatomic) NSString *personalizationSectionFeatureId;
@property (nonatomic) char hasGroupType;
@property (nonatomic) long long groupType;

+ (Class)headlineTopicsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addHeadlineTopics:(id)a0;
- (void)clearHeadlineTopics;
- (id)headlineTopicsAtIndex:(unsigned long long)a0;
- (unsigned long long)headlineTopicsCount;

@end
