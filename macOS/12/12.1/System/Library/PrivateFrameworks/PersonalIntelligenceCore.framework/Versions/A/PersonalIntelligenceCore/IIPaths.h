@interface IIPaths : NSObject

+ (id)topDirectoryCreateIfNeeded:(BOOL)a0;
+ (id)suggestionsDirectory;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)a0;
+ (id)suggestionsDirectoryFile:(id)a0;
+ (id)suggestionsDirectoryFile:(id)a0 creatingSuggestionsDirectoryIfNeeded:(BOOL)a1;
+ (id)suggestionsSubdirectory:(id)a0 creatingDirectoriesIfNeeded:(BOOL)a1;
+ (id)suggestionsSubdirectory:(id)a0;
+ (id)subdirectory:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)filename:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)topDirectory;
+ (id)topDirectoryWithName:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)resourcesDirectory;

@end
