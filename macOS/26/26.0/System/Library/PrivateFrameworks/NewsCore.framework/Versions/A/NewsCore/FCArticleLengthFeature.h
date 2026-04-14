@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)mediumLengthFeature;
+ (id)shortLengthFeature;
+ (id)longLengthFeature;

- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)init;
- (id)initWithLengthIdentifier:(id)a0;
- (void).cxx_destruct;

@end
