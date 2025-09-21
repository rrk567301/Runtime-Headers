@class PHObject;

@interface PHObjectChangeDetails : NSObject {
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    char _assetContentChanged;
    char _assetCollectionTitlePropertiesChanged;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (readonly, nonatomic) char assetCollectionTitlePropertiesChanged;
@property (readonly) PHObject *objectBeforeChanges;
@property (readonly) PHObject *objectAfterChanges;
@property (readonly) char assetContentChanged;
@property (readonly) char objectWasDeleted;

- (id)description;
- (void).cxx_destruct;
- (void)_calculateDiffs;
- (id)initWithPHObject:(id)a0;

@end
