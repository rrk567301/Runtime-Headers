@class NSDictionary;

@interface _AMiDVDItem : SBObject

@property (copy) NSDictionary *properties;

- (BOOL)exists;
- (void)quit;
- (void)moveTo:(id)a0;
- (void)delete;
- (long long)createMagicIDVD;
- (long long)addMovieForMagicIDVDWithPath:(id)a0;
- (long long)addSlideshowForMagicIDVDAndImagePaths:(id)a0 withName:(id)a1 andAudioPaths:(id)a2;
- (long long)archiveProjectPath:(id)a0 encodedAssets:(BOOL)a1 themes:(BOOL)a2;
- (long long)automaticallyFillDropZonesInCurrentMenu;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (long long)closeTrayOfBurner:(id)a0 lockDevice:(BOOL)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (long long)newProjectName:(id)a0 path:(id)a1 saveCurrent:(BOOL)a2;
- (long long)openProjectPath:(id)a0;
- (long long)openTrayOfBurner:(id)a0;
- (void)saveAs:(id)a0 in:(id)a1;
- (long long)saveProjectPath:(id)a0;
- (long long)showObjectWithName:(id)a0;
- (long long)startBurnWithBurner:(id)a0 eraseRewritable:(BOOL)a1;
- (long long)startDiscImageBurnPath:(id)a0;
- (long long)startMagicIDVDTheme:(id)a0 title:(id)a1;
- (long long)startVideo_tsFolderBurnPath:(id)a0;
- (long long)unlockBurningDevice:(id)a0;

@end
