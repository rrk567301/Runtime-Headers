@class NSArray, NSDictionary, NSMutableDictionary, PHPhotoLibrary, NSMutableSet;

@interface PHCloudIdentifierLookup : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_cloudIdentifierKeysByFetchType;
    NSArray *_cloudIdentifiers;
    NSMutableDictionary *_localIdentifersByCloudIdentiferStrings;
    NSMutableSet *_unresolvedCloudIdentifierStrings;
    NSMutableDictionary *_resolvedCloudIdentifiersForLocalCloudIdentifiers;
    NSMutableDictionary *_cloudIdentifiersByLocalIdentifiers;
}

@property BOOL excludeUnsyncedItems;

+ (id)cloudIdentifierKeysByFetchType;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)_computeStableHashesForAssetsWithObjectIDsByUUID:(id)a0;
- (id)_getAssetLocalIdentifiersByStableHashForStableHashes:(id)a0;
- (void)_lookupCloudIdentifiersForIdentifierCode:(id)a0 codeSpecificLocalIdentifiers:(id)a1;
- (void)_lookupCodeSpecificCloudIdentifierStrings:(id)a0 forIdentifierCode:(id)a1;
- (void)_lookupLocalIdentifiersForIdentifierCode:(id)a0 codeSpecificCloudIdentifierStrings:(id)a1;
- (id)_stableHashesForAssetUUIDs:(id)a0;
- (id)fetchOptionsForResolvingIdentifiersInLibrary:(id)a0 fetchType:(id)a1;
- (id)lookupCloudIdentifiersForLocalIdentifiers:(id)a0;
- (id)lookupLocalIdentifiersForCloudIdentifiers:(id)a0;
- (BOOL)supportsIdentifierCode:(id)a0;

@end
