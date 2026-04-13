@interface IOBluetoothCloudServerClient : NSObject

+ (void)iCloudPairing;
+ (void)keyDict:(id)a0;
+ (void)updateCloudPairedList;
+ (void)updateKeyBlob:(id)a0;
+ (void)updateAccessoryBlob:(id)a0;
+ (void)fetchAccessoryKeyBlob;
+ (void)fetchKeyBlob;
+ (void)deleteAccessoryZone;
+ (void)getSignInStatus;
+ (void)sendCloudpairingRetry:(id)a0;
+ (void)keymismatch:(id)a0;
+ (void)checkManateeAccountSupport;
+ (void)fetchHSA2Key;
+ (void)uploadHSA2Key:(id)a0;
+ (void)readOldContainer;
+ (void)readNewContainer;
+ (void)deleteManateeAccessoryZone;
+ (void)deleteOldContainer;
+ (void)upgradeToManatee:(id)a0 accessoryKey:(id)a1;

@end
