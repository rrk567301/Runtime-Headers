@interface CUTPowerMonitor : NSObject {
    id _internal;
}

@property (readonly, nonatomic) BOOL isExternalPowerConnected;
@property (readonly, nonatomic) double batteryPercentRemaining;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (BOOL)_initIOService;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)a0;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)a0 notificationID:(void *)a1;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;

@end
