@interface IIPaths : NSObject

+ (id)suggestionsDirectory;
+ (id)suggestionsSubdirectory:(id)a0 creatingDirectoriesIfNeeded:(BOOL)a1;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(BOOL)a0;
+ (id)suggestionsDirectoryFile:(id)a0;
+ (id)suggestionsDirectoryFile:(id)a0 creatingSuggestionsDirectoryIfNeeded:(BOOL)a1;
+ (id)topDirectoryWithName:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)topDirectory;
+ (id)topDirectoryCreateIfNeeded:(BOOL)a0;
+ (id)filename:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)subdirectory:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)suggestionsSubdirectory:(id)a0;
+ (id)resourcesDirectory;

@end
