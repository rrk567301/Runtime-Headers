@interface PHAWallpaperSuggestionGenerationUtils : NSObject

+ (id)generateSuggestionsWithOptionsDictionary:(id)a0 contentMode:(short)a1 suggestionController:(id)a2 progressReporter:(id)a3 shouldReload:(BOOL *)a4;
+ (BOOL)isGraphDependentSubtype:(unsigned short)a0;
+ (id)subtypePredicateWithContentMode:(short)a0;
+ (id)suggestionOptionsWithDictionary:(id)a0 contentMode:(short)a1 isGraphReady:(BOOL)a2 loggingConnection:(id)a3;
+ (unsigned char)suggestionProfileForContentMode:(short)a0;
+ (BOOL)suggestionsExistInPhotoLibrary:(id)a0 subtypePredicate:(id)a1;

@end
