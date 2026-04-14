@class NSString;

@interface FCNewsTabiRecommendedTagsInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *recommendationsOutputName;
@property (retain, nonatomic) NSString *recommendationsScoreOutputName;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
