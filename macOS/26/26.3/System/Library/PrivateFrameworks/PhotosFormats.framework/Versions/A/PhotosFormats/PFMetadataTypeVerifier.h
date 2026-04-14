@class NSDictionary;

@interface PFMetadataTypeVerifier : NSObject {
    NSDictionary *_expectedImageDictionaryPropertyTypes;
    NSDictionary *_expectedImageArrayPropertyTypes;
    NSDictionary *_expectedAVMetadataIdentifierTypes;
    NSDictionary *_expectedAVMetadataKeyKeySpaceTypes;
}

- (id)valueForKey:(id)a0 keySpace:(id)a1 fromAVMetadataItems:(id)a2;
- (id)verifiedImageValue:(id)a0 forKey:(id)a1;
- (id)init;
- (id)_verifiedValue:(id)a0 forKey:(id)a1 expectedTypes:(id)a2;
- (id)valueForKey:(id)a0 fromProperties:(id)a1;
- (id)valueForAVMetadataIdentifier:(id)a0 fromAVMetadataItems:(id)a1;
- (id)valueForKeyPath:(id)a0 index:(unsigned long long)a1 fromProperties:(id)a2;
- (void).cxx_destruct;
- (id)valueAtIndex:(unsigned long long)a0 forKey:(id)a1 fromArray:(id)a2;
- (id)_expectedAVMetadataIdentifierTypes;
- (id)_expectedImageArrayPropertyTypes;
- (id)_expectedImageDictionaryPropertyTypes;
- (id)_coerceValue:(id)a0 toClass:(Class)a1 forKey:(id)a2;
- (id)_expectedAVMetadataKeyKeySpaceTypes;
- (id)valueForKeyPath:(id)a0 fromProperties:(id)a1;

@end
