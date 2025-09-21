@class NSMutableSet;

@interface BMBookmarkClasses : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_allowed;
    char _addedBiomeStorageClasses;
    char _addedBiomeStreamsClasses;
    char _addedCascadeSetsClasses;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)allowClassesForSecureCodingBMBookmark:(id)a0;
- (id)allowedClassesForSecureCodingBMBookmark;

@end
