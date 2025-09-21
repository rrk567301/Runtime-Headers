@interface SGPaths : HVPathsBase

+ (id)suggestionsDirectory;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(char)a0;
+ (id)suggestionsDirectoryFile:(id)a0;
+ (id)suggestionsDirectoryFile:(id)a0 creatingSuggestionsDirectoryIfNeeded:(char)a1;
+ (id)suggestionsSubdirectory:(id)a0;
+ (id)suggestionsSubdirectory:(id)a0 creatingDirectoriesIfNeeded:(char)a1;
+ (id)topDirectoryCreateIfNeeded:(char)a0;

@end
