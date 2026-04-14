@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXInformationHeuristicRefreshBiomeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _streamType;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_publisher;
- (BOOL)isEqualToATXInformationHeuristicRefreshBiomeTrigger:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)_stop;
- (id)description;
- (id)initWithStreamType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)_start;

@end
