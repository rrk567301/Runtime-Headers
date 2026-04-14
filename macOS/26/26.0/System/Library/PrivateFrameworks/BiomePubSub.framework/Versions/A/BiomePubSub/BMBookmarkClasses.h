@class NSMutableSet;

@interface BMBookmarkClasses : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_allowed;
    BOOL _addedBiomeStorageClasses;
    BOOL _addedBiomeStreamsClasses;
    BOOL _addedCascadeSetsClasses;
}

+ (id)sharedInstance;

- (void)allowClassesForSecureCodingBMBookmark:(id)a0;
- (id)init;
- (id)allowedClassesForSecureCodingBMBookmark;
- (void).cxx_destruct;

@end
