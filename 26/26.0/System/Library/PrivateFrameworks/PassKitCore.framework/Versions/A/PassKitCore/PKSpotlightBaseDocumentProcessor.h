@class NSString, NSDictionary, NSMutableSet;

@interface PKSpotlightBaseDocumentProcessor : NSObject <PKSpotlightDocumentProcessor> {
    NSDictionary *_attributeKeyMap;
    NSMutableSet *_matchedAttributeKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)processDocument:(id)a0;
- (id)normalize:(id)a0;
- (id)attributeKeyMapForDonation;
- (id)convertPkPassToDictionary:(id)a0;
- (id)extractAttributeByExactMatch:(id)a0;
- (id)extractAttributesFromPKPass:(id)a0;
- (void)populateResults:(id)a0 attributeKey:(id)a1 attributeValue:(id)a2;
- (void)processFieldBuckets:(id)a0 intoDictionary:(id)a1 duplicateKeys:(id)a2;

@end
