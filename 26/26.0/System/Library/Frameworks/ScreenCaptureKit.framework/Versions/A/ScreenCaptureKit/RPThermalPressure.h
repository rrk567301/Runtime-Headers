@protocol RPThermalPressureDelegate;

@interface RPThermalPressure : NSObject {
    int _thermalNotificationToken;
    int _thermalLevel;
    int _newThermalLevel;
}

@property (weak, nonatomic) id<RPThermalPressureDelegate> delegate;

- (void)startMonitoring;
- (void)dealloc;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (long long)convertThermalPressureLevel:(int)a0;
- (long long)getCurrentPressureLevel;
- (int)getStateWithToken:(int)a0;
- (void)thermalPressureDidChangeWithThermalLevel:(int)a0;

@end
