@class NSString;

@interface PKSpotlightBaseDocumentProcessor : NSObject <PKSpotlightDocumentProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processDocument:(id)a0;
- (id)normalize:(id)a0;
- (id)multiValuedSearchableAttributes;
- (id)attributeKeyMapForDonation:(id)a0;
- (id)convertPkPassToDictionary:(id)a0;
- (id)extractAttributeByExactMatch:(id)a0 attributeKeyMap:(id)a1;
- (id)extractAttributesFromPKPass:(id)a0;
- (void)populateResults:(id)a0 matchDocumentResults:(id)a1;
- (void)processFieldBuckets:(id)a0 intoDictionary:(id)a1 duplicateKeys:(id)a2;
- (id)trim:(id)a0;

@end
