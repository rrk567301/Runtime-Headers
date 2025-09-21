@class NSString, TAManagerProxy, TAOperation;

@interface TADeviceManager : NSObject <TANotificationDelegate> {
    TAManagerProxy *_proxy;
    TAOperation *_currentOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;
+ (void)initialize;
+ (BOOL)isSupportedPlatform;

- (int)cancelOperation:(id)a0;
- (id)init;
- (id)connectedDevices;
- (void).cxx_destruct;
- (id)pairedDevices;
- (void)operationFinished:(id)a0;
- (id)availablePairingSlotsWithError:(id *)a0;
- (id)connectedDevicesWithFilter:(id)a0;
- (id)createSecureIntentOperationWithError:(id *)a0;
- (void)notification:(unsigned int)a0 withData:(id)a1;
- (BOOL)requestDailyUpdateWithError:(id *)a0;
- (int)startOperation:(id)a0 withData:(id)a1;
- (BOOL)unpairAllDevicesWithError:(id *)a0;

@end
