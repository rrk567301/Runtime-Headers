@interface QLiPhotoExport : NSObject

+ (id)sharedSlideshow;
+ (void)addDocumentWithURLToIPhoto:(id)a0;
+ (char)canExportToIPhoto;
+ (id)iPhotoBundleIdentifier;
+ (void)loadImageKitFrameworkIfNeeded;

@end
