@interface FCTagIDFeature : FCPersonalizationFeature

- (id)init;
- (id)initWithTagID:(id)a0;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (BOOL)shouldBeBoosted;
- (id)initWithPersonalizationIdentifier:(id)a0;

@end
