@class NSString, NSMutableArray;

@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying> {
    struct { unsigned char topicId : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) char hasTopicId;
@property (nonatomic) unsigned long long topicId;
@property (readonly, nonatomic) char hasNamedEntity;
@property (retain, nonatomic) NSString *namedEntity;
@property (readonly, nonatomic) char hasNamedEntityWithFeedback;
@property (retain, nonatomic) NSString *namedEntityWithFeedback;
@property (nonatomic) char hasScore;
@property (nonatomic) float score;
@property (retain, nonatomic) NSMutableArray *features;
@property (retain, nonatomic) NSMutableArray *feedbackItems;

+ (Class)featuresType;
+ (Class)feedbackItemsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFeatures:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;
- (void)addFeedbackItems:(id)a0;
- (void)clearFeedbackItems;
- (id)feedbackItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackItemsCount;

@end
