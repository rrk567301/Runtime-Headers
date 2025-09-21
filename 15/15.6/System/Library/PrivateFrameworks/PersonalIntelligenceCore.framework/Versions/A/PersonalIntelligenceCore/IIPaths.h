@interface IIPaths : NSObject

+ (id)filename:(id)a0 createIfNeeded:(char)a1;
+ (id)subdirectory:(id)a0 createIfNeeded:(char)a1;
+ (id)suggestionsDirectory;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(char)a0;
+ (id)suggestionsDirectoryFile:(id)a0;
+ (id)suggestionsDirectoryFile:(id)a0 creatingSuggestionsDirectoryIfNeeded:(char)a1;
+ (id)suggestionsSubdirectory:(id)a0;
+ (id)suggestionsSubdirectory:(id)a0 creatingDirectoriesIfNeeded:(char)a1;
+ (id)topDirectory;
+ (id)topDirectoryCreateIfNeeded:(char)a0;
+ (id)topDirectoryWithName:(id)a0 createIfNeeded:(char)a1;
+ (id)resourcesDirectory;

@end
