@interface QLiPhotoExport : NSObject

+ (id)sharedSlideshow;
+ (void)loadImageKitFrameworkIfNeeded;
+ (id)iPhotoBundleIdentifier;
+ (void)addDocumentWithURLToIPhoto:(id)a0;
+ (BOOL)canExportToIPhoto;

@end
