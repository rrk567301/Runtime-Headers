@interface SearchUIPhotosUtilities : NSObject

+ (id)sharedPhotoLibraryIsSyndicated:(char)a0;
+ (id)fetchOptionsForLibrary:(id)a0;
+ (id)fetchResultForPersonIdentifiers:(id)a0 isSyndicated:(char)a1;
+ (id)fetchResultForPhotoIdentifiers:(id)a0 isSyndicated:(char)a1;
+ (void)shutdownPhotoLibraries;

@end
