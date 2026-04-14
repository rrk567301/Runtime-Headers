@interface CUTPowerMonitor : NSObject {
    id _internal;
}

@property (readonly, nonatomic) BOOL isExternalPowerConnected;
@property (readonly, nonatomic) double batteryPercentRemaining;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)a0;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)a0 notificationID:(void *)a1;
- (void)removeDelegate:(id)a0;
- (BOOL)_initIOService;

@end
