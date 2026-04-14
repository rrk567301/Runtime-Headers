@class NSManagedObjectID, NSString, NSMutableArray, PLPhotoLibraryPathManagerIdentifier;

@interface PLLocalVideoKeyFrameGenerationJob : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlerLock;
    NSMutableArray *_completionHandlers;
}

@property (retain, nonatomic) NSManagedObjectID *assetObjectID;
@property (nonatomic) BOOL networkAccessAllowed;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID;

- (void)addCompletionHandler:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)callCompletionHandlersWithMutatedMoc:(id)a0 error:(id)a1 storedRecipes:(id)a2 affectedRecipes:(id)a3 sourceMetadata:(id)a4;
- (BOOL)isEqualToJob:(id)a0;

@end
