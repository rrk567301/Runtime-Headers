@class NSString;
@protocol AAAccountStoreProxyProtocol;

@interface AADataclassEnableNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (retain, nonatomic) id<AAAccountStoreProxyProtocol> storeProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_processIMAPMailAccount:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_enableBYOEWithDataclassActionsAndSaveAccount:(id)a0 store:(id)a1 completion:(id /* block */)a2;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_saveAccount:(id)a0 store:(id)a1 withDataclassActions:(id)a2 doVerify:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_processAppleAccount:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)_shouldVerifyAccountSave;

@end
