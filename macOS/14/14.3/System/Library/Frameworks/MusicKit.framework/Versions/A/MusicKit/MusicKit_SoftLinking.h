@interface MusicKit_SoftLinking : NSObject

+ (id)artworkCatalogWithDataSourceShortDescription:(id)a0 dataSourceIdentifier:(id)a1 tokenParameters:(id)a2;
+ (id)emptyIdentifierSet;
+ (id)recentlySearchedUnarchiveUnderlyingIdentifierSetWithData:(id)a0 error:(id *)a1;
+ (void)_ensureConsistencyOfUnderlyingOptionSetsForAudioTraits;
+ (id)_identifierSetWithCatalogID:(id)a0 libraryID:(id)a1 cloudID:(id)a2 purchasedAdamID:(id)a3 assetAdamID:(id)a4 deviceLocalID:(id)a5 possibleDeviceLocalID:(id)a6 containedDeviceLocalID:(id)a7 syncID:(id)a8 playbackID:(id)a9 formerIDs:(id)a10 modelObjectType:(long long)a11 source:(long long)a12;
+ (BOOL)_isEntitledToUserDSID;
+ (long long)_libraryPersistentIDForStringValue:(id)a0;
+ (id)artworkCatalogWithStoreArtworkToken:(id)a0;
+ (long long)audioTraitsForRawValue:(long long)a0;
+ (id)identifierSetFromLegacyModelObject:(id)a0;
+ (id)identifierSetWithCatalogID:(id)a0 libraryID:(id)a1 cloudID:(id)a2 purchasedAdamID:(id)a3 assetAdamID:(id)a4 deviceLocalID:(id)a5 containedDeviceLocalID:(id)a6 syncID:(id)a7 playbackID:(id)a8 formerIDs:(id)a9 modelObjectType:(long long)a10 source:(long long)a11;
+ (id)identifierSetWithIdentifier:(id)a0 modelObjectType:(long long)a1 specificLibraryDatabaseID:(id)a2 isPossibleLibraryPersistentID:(BOOL)a3 source:(long long)a4;
+ (id)rawSourceFromSource:(long long)a0;
+ (long long)rawValueForAudioTraits:(long long)a0;
+ (id)recentlySearchedArchivedDataForUnderlyingIdentifierSet:(id)a0 modelObjectType:(long long)a1 error:(id *)a2;
+ (id)storeArtworkTokenWithImageArtworkInfo:(id)a0;

@end
