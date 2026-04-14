@interface FCTagIDFeature : FCPersonalizationFeature

- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)init;
- (BOOL)shouldBeBoosted;
- (id)initWithTagID:(id)a0;

@end
