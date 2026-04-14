@class NSString;

@interface FCNewsTabiRecommendedTagsInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *recommendationsOutputName;
@property (retain, nonatomic) NSString *recommendationsScoreOutputName;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
