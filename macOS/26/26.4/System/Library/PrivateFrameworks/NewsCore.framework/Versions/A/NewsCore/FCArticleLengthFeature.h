@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)longLengthFeature;
+ (id)shortLengthFeature;
+ (id)mediumLengthFeature;

- (id)initWithLengthIdentifier:(id)a0;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;

@end
