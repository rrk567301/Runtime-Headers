@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)shortLengthFeature;
+ (id)mediumLengthFeature;
+ (id)longLengthFeature;

- (id)init;
- (void).cxx_destruct;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)initWithLengthIdentifier:(id)a0;

@end
