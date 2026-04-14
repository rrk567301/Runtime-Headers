@class NSString;

@interface VNObjectTrackerRevision2 : VNObjectTracker

@property (class, readonly, copy) NSString *rpnTrackerInitModelName;
@property (class, readonly, copy) NSString *rpnTrackerTrackModelName;

+ (id)rpnTrackerInitProcessingQueueName;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnInitQueue;
+ (id)rpnTrackQueue;
+ (id)serializeRPNInitializationQueue;
+ (id)serializeRPNTrackingQueue;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
