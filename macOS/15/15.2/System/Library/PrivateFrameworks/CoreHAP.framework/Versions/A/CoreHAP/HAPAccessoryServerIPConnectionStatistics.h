@class HAPAccessoryServer;

@interface HAPAccessoryServerIPConnectionStatistics : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) HAPAccessoryServer *accessory;
@property (readonly) long long state;
@property (readonly) BOOL metricTriggered;
@property (readonly) BOOL sessionRestoreActive;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (void)accessoryServerIPEvent:(long long)a0;
- (void)generateBonjourRemoveMetric;

@end
