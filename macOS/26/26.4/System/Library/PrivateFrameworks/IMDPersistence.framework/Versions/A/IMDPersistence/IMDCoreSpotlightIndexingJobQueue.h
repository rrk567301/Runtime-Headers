@class NSOperationQueue, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCoreSpotlightIndexingJobQueue : NSObject

@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isOnQueue;
- (void)submitJob:(id)a0;

@end
