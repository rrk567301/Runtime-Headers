@interface PLInitialSuggestionsStorageManager : NSObject

+ (char)_deleteInitialSuggestionsAtFilePath:(id)a0 error:(out id *)a1;
+ (id)_initialSuggestionsFilePathForPhotoLibrary:(id)a0;
+ (char)deleteInitialSuggestionsForPathManager:(id)a0 error:(out id *)a1;
+ (char)deleteInitialSuggestionsForPhotoLibrary:(id)a0 error:(out id *)a1;
+ (id)initialSearchSuggestionsForPhotoLibrary:(id)a0 error:(out id *)a1;
+ (char)saveInitialSuggestions:(id)a0 photoLibrary:(id)a1 error:(out id *)a2;

@end
