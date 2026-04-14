@class NSString;

@interface VNObjectTrackerRevision2 : VNObjectTracker

@property (class, readonly, copy) NSString *rpnTrackerInitModelName;
@property (class, readonly, copy) NSString *rpnTrackerTrackModelName;

+ (id)rpnInitQueue;
+ (id)serializeRPNInitializationQueue;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnTrackQueue;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)serializeRPNTrackingQueue;
+ (id)supportedComputeDevicesForOptions:(id)a0 error:(id *)a1;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
