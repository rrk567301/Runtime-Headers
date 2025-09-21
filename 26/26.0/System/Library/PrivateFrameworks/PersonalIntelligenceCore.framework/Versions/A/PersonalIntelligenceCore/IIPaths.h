@interface IIPaths : NSObject

+ (id)topDirectory;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)a0;
+ (id)suggestionsDirectory;
+ (id)suggestionsSubdirectory:(id)a0;
+ (id)resourcesDirectory;
+ (id)suggestionsSubdirectory:(id)a0 creatingDirectoriesIfNeeded:(BOOL)a1;
+ (id)suggestionsDirectoryFile:(id)a0;
+ (id)suggestionsDirectoryFile:(id)a0 creatingSuggestionsDirectoryIfNeeded:(BOOL)a1;
+ (id)topDirectoryCreateIfNeeded:(BOOL)a0;
+ (id)filename:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)subdirectory:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)topDirectoryWithName:(id)a0 createIfNeeded:(BOOL)a1;

@end
