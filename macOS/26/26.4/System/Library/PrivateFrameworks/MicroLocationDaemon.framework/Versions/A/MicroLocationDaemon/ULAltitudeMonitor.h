@class NSString, ULAltitudeProvider;

@interface ULAltitudeMonitor : ULEventMonitor <ULAltitudeProviderDelegate>

@property (retain, nonatomic) ULAltitudeProvider *altitudeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAltitudeAvailable;

- (void).cxx_destruct;
- (id)init;
- (void)stopMonitoring:(id)a0;
- (void)dealloc;
- (void)startMonitoring:(id)a0;
- (BOOL)_calculateIsUpToDateForAltitudeTimestamp:(id)a0;
- (void)didReceiveAltitudeErrorWithSender:(id)a0 altitudeStatus:(id)a1 error:(id)a2 date:(id)a3;
- (void)didReceiveAltitudeProviderWithSender:(id)a0 isAvailable:(BOOL)a1;
- (void)didReceiveAltitudeUpdateWithSender:(id)a0 altitudeStatus:(id)a1 uuid:(id)a2;

@end
