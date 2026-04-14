@protocol HMMLogEventSubmitting;

@interface HMDMetricsDeviceStateManager : HMFObject <HMDMetricsDeviceStateProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long currentDataSyncState;
@property (readonly) unsigned long long currentHomeManagerStatus;

- (void).cxx_destruct;
- (id)initWithLogEventSubmitter:(id)a0;
- (void)updateWithDataSyncState:(unsigned long long)a0;
- (void)updateWithHomeManagerStatus:(unsigned long long)a0;

@end
