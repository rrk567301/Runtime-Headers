@class NSString;

@interface VNObjectTrackerRevision2 : VNObjectTracker

@property (class, readonly, copy) NSString *rpnTrackerInitModelName;
@property (class, readonly, copy) NSString *rpnTrackerTrackModelName;

+ (id)serializeRPNInitializationQueue;
+ (id)serializeRPNTrackingQueue;
+ (id)supportedComputeDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)rpnTrackQueue;
+ (id)rpnInitQueue;
+ (id)rpnTrackerTrackProcessingQueueName;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
