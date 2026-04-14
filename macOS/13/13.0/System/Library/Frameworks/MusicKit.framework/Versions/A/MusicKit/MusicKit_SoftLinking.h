@interface MusicKit_SoftLinking : NSObject

+ (id)artworkCatalogWithDataSourceShortDescription:(id)a0 dataSourceIdentifier:(id)a1 tokenParameters:(id)a2;
+ (id)emptyIdentifierSet;
+ (id)identifierSetWithCatalogID:(id)a0 libraryID:(id)a1 cloudID:(id)a2 purchasedAdamID:(id)a3 deviceLocalID:(id)a4 modelObjectType:(long long)a5;
+ (id)identifierSetWithIdentifier:(id)a0 modelObjectType:(long long)a1 specificLibraryDatabaseID:(id)a2;
+ (id)identifierSetFromLegacyModelObject:(id)a0;
+ (long long)_libraryPersistentIDForStringValue:(id)a0;
+ (void)_ensureConsistencyOfUnderlyingOptionSetsForAudioTraits;
+ (long long)audioTraitsForRawValue:(long long)a0;
+ (long long)rawValueForAudioTraits:(long long)a0;

@end
