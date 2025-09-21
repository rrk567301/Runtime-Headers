@class NSManagedObjectID, NSString, NSMutableArray, PLPhotoLibraryPathManagerIdentifier;

@interface PLLocalVideoKeyFrameGenerationJob : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlerLock;
    NSMutableArray *_completionHandlers;
}

@property (retain, nonatomic) NSManagedObjectID *assetObjectID;
@property (nonatomic) char networkAccessAllowed;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)callCompletionHandlersWithMutatedMoc:(id)a0 error:(id)a1 storedRecipes:(id)a2 affectedRecipes:(id)a3 sourceMetadata:(id)a4;
- (char)isEqualToJob:(id)a0;

@end
