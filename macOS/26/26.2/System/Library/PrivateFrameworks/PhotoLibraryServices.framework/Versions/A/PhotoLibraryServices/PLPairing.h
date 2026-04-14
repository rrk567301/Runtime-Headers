@class NSPredicate;

@interface PLPairing : NSObject {
    NSPredicate *_locatedInUsersPhotoLibrary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)processPairingForGroupIDs:(id)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)processPairingForEntireLibraryInContext:(id)a0 error:(id *)a1;

@end
