@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)shortLengthFeature;
+ (id)longLengthFeature;
+ (id)mediumLengthFeature;

- (id)initWithPersonalizationIdentifier:(id)a0;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)initWithLengthIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
