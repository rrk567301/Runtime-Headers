@interface PKSpotlightBoardingPassDocumentProcessor : PKSpotlightBaseDocumentProcessor

- (id)multiValuedSearchableAttributes;
- (id)attributeKeyMapForAirTransit;
- (id)attributeKeyMapForBusAndTrainTransit;
- (id)attributeKeyMapForDonation:(id)a0;
- (id)extractAttributesFromPKPass:(id)a0;

@end
