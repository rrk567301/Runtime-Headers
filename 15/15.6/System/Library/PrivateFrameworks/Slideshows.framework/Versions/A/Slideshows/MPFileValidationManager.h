@interface MPFileValidationManager : NSObject

+ (void)checkFileExtension:(id)a0 isAudio:(char *)a1 isImage:(char *)a2 isVideo:(char *)a3;
+ (void)checkSpotlightFileType:(id)a0 isAudio:(char *)a1 isImage:(char *)a2 isVideo:(char *)a3;
+ (id)resolveAliasPath:(id)a0;
+ (char)validateFiles:(id)a0 allowAudio:(char)a1 allowImages:(char)a2 allowMovies:(char)a3 extensionsOnly:(char)a4;
+ (char)validateFilesForAudio:(id)a0 extensionsOnly:(char)a1;
+ (char)validateFilesForImages:(id)a0 extensionsOnly:(char)a1;
+ (char)validateFilesForMovies:(id)a0 extensionsOnly:(char)a1;

@end
