@class NSUUID, NSDictionary;

@interface PCEmbedding : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *bundleIdentifier;
@property (retain, nonatomic) NSUUID *suggestionID;
@property (nonatomic) unsigned long long embeddingType;
@property (retain, nonatomic) NSDictionary *activityContextEmbedding;
@property (retain, nonatomic) NSDictionary *timeContextEmbedding;
@property (retain, nonatomic) NSDictionary *locationContextEmbedding;

+ (id)embeddingObjectsFromProtobuf:(id)a0;
+ (id)indoorOutdoorCategoryActivityTypes;
+ (double)secondsFromTimeOfDay:(id)a0 toTimeOfDay:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)timeOfDay;
- (id)description;
- (id)sensitiveDescription;
- (void).cxx_destruct;
- (id)summaryDictionary;
- (id)dayOfWeekString:(unsigned long long)a0;
- (id)extractActivityContextEmbedding:(id)a0;
- (id)extractActivityContextEmbeddingFromProtobufEquivalent:(id)a0;
- (id)extractLocationContextEmbedding:(id)a0;
- (id)extractLocationContextEmbeddingFromProtobufEquivalent:(id)a0;
- (id)extractTimeContextEmbedding:(id)a0;
- (id)extractTimeContextEmbeddingFromProtobufEquivalent:(id)a0;
- (double)getDistanceFrom:(id)a0 withWeights:(id)a1;
- (id)initWithEventBundle:(id)a0 forEmbeddingType:(unsigned long long)a1;
- (id)initWithProtobufEquivalent:(id)a0;

@end
