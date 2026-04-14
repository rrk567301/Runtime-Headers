@interface MusicKit_SoftLinking : NSObject

+ (id)emptyIdentifierSet;
+ (id)artworkCatalogWithDataSourceShortDescription:(id)a0 dataSourceIdentifier:(id)a1 tokenParameters:(id)a2;
+ (id)identifierSetWithCatalogID:(id)a0 libraryID:(id)a1 cloudID:(id)a2 purchasedAdamID:(id)a3 persistentID:(id)a4 modelObjectType:(long long)a5;
+ (id)identifierSetWithIdentifier:(id)a0 modelObjectType:(long long)a1;
+ (void)_ensureConsistencyOfUnderlyingOptionSetsForAudioTraits;
+ (long long)audioTraitsForRawValue:(long long)a0;
+ (long long)rawValueForAudioTraits:(long long)a0;

@end
