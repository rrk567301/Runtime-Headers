@interface CUTPowerMonitor : NSObject {
    id _internal;
}

@property (readonly, nonatomic) BOOL isExternalPowerConnected;
@property (readonly, nonatomic) double batteryPercentRemaining;

+ (id)sharedInstance;

- (id)_init;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void)dealloc;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)a0;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)a0 notificationID:(void *)a1;
- (BOOL)_initIOService;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void).cxx_destruct;

@end
