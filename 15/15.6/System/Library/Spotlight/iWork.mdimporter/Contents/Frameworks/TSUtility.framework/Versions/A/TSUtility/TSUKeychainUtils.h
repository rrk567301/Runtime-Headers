@interface TSUKeychainUtils : NSObject

@property (class, readonly, nonatomic) long long biometryAvailability;
@property (class, nonatomic, getter=isBiometryEnabledByDefault) char biometryEnabledByDefault;

+ (id)errorForStatus:(int)a0;
+ (void)authenticateAndUpgradeKeychainResult:(id)a0 localizedReason:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)cancelBiometryIfNeeded;
+ (void)cryptoProcessData:(id)a0 encrypt:(char)a1 localizedReason:(id)a2 completionQueue:(id)a3 completionHandler:(id /* block */)a4;
+ (id)defaultDocumentPasswordDescriptionString;
+ (id)defaultServiceForGenericItem:(id)a0;
+ (char)lookupGenericItem:(id)a0 account:(id *)a1 passphrase:(id *)a2 options:(unsigned long long)a3 error:(id *)a4;
+ (void)lookupGenericItem:(id)a0 localizedReason:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
+ (char)lookupGenericItem:(id)a0 passphrase:(id *)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)mutableQueryForGenericItem:(id)a0 returnData:(char)a1;
+ (id)mutableQueryForSearch:(char)a0 withParameters:(id)a1;
+ (id)queryForSearch:(char)a0 withParameters:(id)a1;
+ (char)removeGenericItem:(id)a0 error:(id *)a1;
+ (void)setPassphrase:(id)a0 forGenericItem:(id)a1 service:(id)a2 description:(id)a3 label:(id)a4 account:(id)a5 options:(unsigned long long)a6 completionQueue:(id)a7 completionHandler:(id /* block */)a8;
+ (char)setPassphrase:(id)a0 forGenericItem:(id)a1 service:(id)a2 description:(id)a3 label:(id)a4 account:(id)a5 options:(unsigned long long)a6 error:(id *)a7;
+ (char)shouldUseBiometry;

@end
