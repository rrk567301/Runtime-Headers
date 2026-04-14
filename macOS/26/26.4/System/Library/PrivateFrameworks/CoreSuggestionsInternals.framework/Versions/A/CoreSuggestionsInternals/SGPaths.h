@interface SGPaths : HVPathsBase

+ (id)suggestionsDirectoryFile:(id)a0;
+ (id)suggestionsSubdirectory:(id)a0;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)a0;
+ (id)suggestionsDirectoryFile:(id)a0 creatingSuggestionsDirectoryIfNeeded:(BOOL)a1;
+ (id)suggestionsDirectory;
+ (id)topDirectoryCreateIfNeeded:(BOOL)a0;
+ (id)suggestionsSubdirectory:(id)a0 creatingDirectoriesIfNeeded:(BOOL)a1;

@end
