@class NSObject;
@protocol OS_dispatch_queue;

@interface SKDPowerLogSender : NSObject <SKDLogSending> {
    NSObject<OS_dispatch_queue> *_queue;
    struct PPSTelemetryIdentifier { } *_processorIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendLog:(id)a0 domain:(id)a1;
- (void)emitPipelineItemEventFor:(id)a0;

@end
