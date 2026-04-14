@interface AXVFileManager : NSObject

+ (id)sharedManager;

- (id)temporaryDirectoryPath;
- (id)saveImageRepresentationForView:(id)a0 fileName:(id)a1;
- (id)saveImage:(id)a0 fileName:(id)a1;
- (id)_saveDirectoryForImageWithFileName:(id)a0;
- (BOOL)_createTemporarySubDirectory:(id)a0;

@end
