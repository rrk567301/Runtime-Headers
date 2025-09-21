@interface IKSlideshowExporter : NSObject

+ (id)sharedSlideshowExporter;

- (id)init;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (void)addItem:(id)a0 toFileArray:(id)a1;
- (id)applicationInfo:(id)a0;
- (char)canExportToApp:(id)a0 appURL:(id)a1 newInfo:(id)a2;
- (char)canExportToApplication:(id)a0;
- (char)exportFileArray:(id)a0 toApplication:(id)a1 utType:(id)a2;
- (char)exportItem:(id)a0 toApplication:(id)a1;
- (char)exportURLArray:(id)a0 toApplication:(id)a1 utType:(id)a2;
- (char)exportURLArrayToiPhoto:(id)a0;
- (char)pathIsOnBootVolume:(id)a0;
- (id)sampleJPG_URL;

@end
