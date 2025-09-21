@class PLDatabaseContext, NSData;

@interface PLQuickActionManager : NSObject <PLCameraPreviewWellImageChangeObserver> {
    PLDatabaseContext *_databaseContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_lock_cachedMostRecentPhotoData;
    char _lock_mostRecentPhotoIsInvalid;
}

@property (class, nonatomic) char shouldShowInternalQuickActions;

@property (retain, nonatomic, setter=_setSBSApplicationShortcutServiceClass:) Class _SBSApplicationShortcutServiceClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutItemClass:) Class _SBSApplicationShortcutItemClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutCustomImageIconClass:) Class _SBSApplicationShortcutCustomImageIconClass;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_userHasPhotos;
- (char)_userHasPhotosFromLastYear;
- (void)buildQuickActionItemsInvalidateMostRecentPhoto:(char)a0;
- (void)cameraPreviewWellImageDidChange:(id)a0;
- (id)initWithDatabaseContext:(id)a0;

@end
