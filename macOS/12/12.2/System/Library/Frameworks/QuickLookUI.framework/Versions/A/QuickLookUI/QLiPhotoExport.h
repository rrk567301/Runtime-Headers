@interface QLiPhotoExport : NSObject

+ (id)sharedSlideshow;
+ (id)iPhotoBundleIdentifier;
+ (BOOL)canExportToIPhoto;
+ (void)addDocumentWithURLToIPhoto:(id)a0;
+ (void)loadImageKitFrameworkIfNeeded;

@end
