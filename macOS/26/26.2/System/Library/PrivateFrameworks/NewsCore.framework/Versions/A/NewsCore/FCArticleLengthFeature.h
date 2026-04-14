@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)mediumLengthFeature;
+ (id)shortLengthFeature;
+ (id)longLengthFeature;

- (void).cxx_destruct;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)init;
- (id)initWithLengthIdentifier:(id)a0;

@end
