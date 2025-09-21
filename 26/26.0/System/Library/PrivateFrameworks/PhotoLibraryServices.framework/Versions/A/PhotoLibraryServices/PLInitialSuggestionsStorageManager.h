@interface PLInitialSuggestionsStorageManager : NSObject

+ (BOOL)deleteInitialSuggestionsForPhotoLibrary:(id)a0 error:(out id *)a1;
+ (id)initialSearchSuggestionsForPhotoLibrary:(id)a0 psiDatabase:(id)a1 error:(out id *)a2;
+ (BOOL)saveInitialSuggestions:(id)a0 photoLibrary:(id)a1 error:(out id *)a2;
+ (BOOL)updateInitialSuggestionsWithIdentifiers:(id)a0 dateLastUsed:(id)a1 photoLibrary:(id)a2 error:(out id *)a3;

@end
