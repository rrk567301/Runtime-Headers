@interface PKSpotlightBoardingPassDocumentProcessor : PKSpotlightBaseDocumentProcessor

- (id)attributeKeyMapForDonation;
- (id)extractAttributesFromPKPass:(id)a0;
- (void)populateResults:(id)a0 attributeKey:(id)a1 attributeValue:(id)a2;

@end
