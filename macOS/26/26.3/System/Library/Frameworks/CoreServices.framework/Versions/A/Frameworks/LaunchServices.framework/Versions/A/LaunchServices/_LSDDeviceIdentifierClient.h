@interface _LSDDeviceIdentifierClient : _LSDClient <_LSDDeviceIdentifierProtocol>

- (void)clearAllIdentifiersOfType:(long long)a0;
- (id)initWithXPCConnection:(id)a0;
- (void)computeIDFVForBundleURL:(id)a0 completion:(id /* block */)a1;
- (void)getIdentifierOfType:(long long)a0 completionHandler:(id /* block */)a1;
- (unsigned int)findAppBundleForExecutableURL:(id)a0 withContext:(struct LSContext { id x0; } *)a1;
- (BOOL)hasEntitlementToClearAllIdentifiersOfType:(long long)a0;
- (void)getIdentifierOfType:(long long)a0 forApplicationAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canAccessAdvertisingIdentifier;
- (void)getIdentifierOfType:(long long)a0 vendorName:(id)a1 completionHandler:(id /* block */)a2;
- (id)computeUUIDForSaltString:(id)a0;

@end
