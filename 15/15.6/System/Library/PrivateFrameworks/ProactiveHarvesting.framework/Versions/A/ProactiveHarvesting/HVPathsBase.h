@interface HVPathsBase : NSObject

+ (id)filename:(id)a0 createIfNeeded:(char)a1;
+ (id)subdirectory:(id)a0 createIfNeeded:(char)a1;
+ (id)topDirectory;
+ (id)topDirectoryCreateIfNeeded:(char)a0;
+ (id)topDirectoryWithName:(id)a0 createIfNeeded:(char)a1;
+ (id)filename:(id)a0 subdirectory:(id)a1;
+ (id)subdirectory:(id)a0;
+ (id)filename:(id)a0;
+ (id)filename:(id)a0 subdirectory:(id)a1 createIfNeeded:(char)a2;

@end
