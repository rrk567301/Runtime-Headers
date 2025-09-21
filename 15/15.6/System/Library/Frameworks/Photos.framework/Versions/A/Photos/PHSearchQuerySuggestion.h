@class NSArray, NSAttributedString;

@interface PHSearchQuerySuggestion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSAttributedString *queryText;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) long long assetCount;
@property (readonly, copy, nonatomic) NSArray *keyAssetUUIDs;

+ (id)new;
+ (id)_assetUUIDsFromFetchResult:(id)a0;
+ (char)_deleteRecentSuggestions:(id)a0 photoLibrary:(id)a1 error:(out id *)a2;
+ (id)_recentSuggestionsForPhotoLibrary:(id)a0 error:(out id *)a1;
+ (char)_saveRecentSuggestions:(id)a0 photoLibrary:(id)a1 error:(out id *)a2;
+ (char)deleteAllRecentSearchSuggestionsForPhotoLibrary:(id)a0 error:(out id *)a1;
+ (char)deleteRecentSearchSuggestions:(id)a0 photoLibrary:(id)a1 error:(out id *)a2;
+ (void)initialSearchQuerySuggestionsForPhotoLibrary:(id)a0 suggestionLimit:(unsigned long long)a1 minimumResultCountPerSuggestion:(unsigned long long)a2 suggestionStyleType:(unsigned long long)a3 suggestionsHandler:(id /* block */)a4;
+ (void)initialSearchQuerySuggestionsForPhotoLibrary:(id)a0 suggestionLimit:(unsigned long long)a1 minimumResultCountPerSuggestion:(unsigned long long)a2 suggestionsHandler:(id /* block */)a3;
+ (id)recentSearchesForPhotoLibrary:(id)a0 error:(out id *)a1;
+ (char)saveRecentSearchQuery:(id)a0 assetResultCount:(long long)a1 keyAssetUUIDs:(id)a2 photoLibrary:(id)a3 error:(out id *)a4;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (id)initWithQueryText:(id)a0 type:(unsigned long long)a1 assetCount:(long long)a2 keyAssetUUIDs:(id)a3;

@end
