@class NSString;

@interface VNObjectTrackerRevision2 : VNObjectTracker

@property (class, readonly, copy) NSString *rpnTrackerInitModelName;
@property (class, readonly, copy) NSString *rpnTrackerTrackModelName;

+ (id)rpnTrackerInitProcessingQueueName;
+ (id)supportedComputeDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)rpnTrackQueue;
+ (id)serializeRPNInitializationQueue;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnInitQueue;
+ (id)serializeRPNTrackingQueue;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
