@interface SGPaths : HVPathsBase

+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)a0;
+ (id)suggestionsDirectory;
+ (id)suggestionsSubdirectory:(id)a0;
+ (id)suggestionsSubdirectory:(id)a0 creatingDirectoriesIfNeeded:(BOOL)a1;
+ (id)suggestionsDirectoryFile:(id)a0;
+ (id)suggestionsDirectoryFile:(id)a0 creatingSuggestionsDirectoryIfNeeded:(BOOL)a1;
+ (id)topDirectoryCreateIfNeeded:(BOOL)a0;

@end
