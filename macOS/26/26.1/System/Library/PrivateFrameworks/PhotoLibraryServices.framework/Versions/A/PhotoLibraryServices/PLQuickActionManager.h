@class PLDatabaseContext, NSData;

@interface PLQuickActionManager : NSObject <PLCameraPreviewWellImageChangeObserver> {
    PLDatabaseContext *_databaseContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_lock_cachedMostRecentPhotoData;
    BOOL _lock_mostRecentPhotoIsInvalid;
}

@property (class, nonatomic) BOOL shouldShowInternalQuickActions;

@property (retain, nonatomic, setter=_setSBSApplicationShortcutServiceClass:) Class _SBSApplicationShortcutServiceClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutItemClass:) Class _SBSApplicationShortcutItemClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutCustomImageIconClass:) Class _SBSApplicationShortcutCustomImageIconClass;

- (id)initWithDatabaseContext:(id)a0;
- (BOOL)_userHasPhotos;
- (void)dealloc;
- (void)buildQuickActionItemsInvalidateMostRecentPhoto:(BOOL)a0;
- (BOOL)_userHasPhotosFromLastYear;
- (void).cxx_destruct;
- (void)cameraPreviewWellImageDidChange:(id)a0;

@end
