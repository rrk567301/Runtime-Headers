@interface PXBookmarkUtilities : NSObject

+ (BOOL)canAddBookmarkForObject:(id)a0;
+ (void)flushCachedBookmarksForPhotoLibrary:(id)a0;
+ (BOOL)hasBookmarkForObject:(id)a0;
+ (id)suggestedObjectsForPhotoLibrary:(id)a0;

- (id)init;

@end
