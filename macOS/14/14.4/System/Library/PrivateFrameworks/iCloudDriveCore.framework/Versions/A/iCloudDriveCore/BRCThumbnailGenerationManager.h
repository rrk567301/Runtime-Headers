@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCThumbnailGenerationManager : NSObject {
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    NSObject<OS_dispatch_queue> *_thumbnailPrivateQueue;
    BOOL _prepareReachedMax;
    NSMutableDictionary *_thumbnailsOperations;
}

@property (copy, nonatomic) id /* block */ reachedThumbnailMaximumCapacity;
@property (copy, nonatomic) id /* block */ hasThumbnailAvailableSlot;

+ (id)defaultManager;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_addThumbnailOperation:(id)a0 thumbnailID:(id)a1;
- (id)_generateThumbnailOperationAtURL:(id)a0 targetURL:(id)a1;
- (void)_removeThumbnailOperationForThumbnailID:(id)a0;
- (unsigned long long)_thumbnailOperationsMax;
- (void)addThumbnailGenerationJobAtURL:(id)a0 targetURL:(id)a1 thumbnailID:(id)a2 syncContext:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)canScheduleMoreJobs;
- (id)operationForThumbnailID:(id)a0;

@end
