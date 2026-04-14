@interface FCTagIDFeature : FCPersonalizationFeature

- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)initWithTagID:(id)a0;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)init;
- (BOOL)shouldBeBoosted;

@end
