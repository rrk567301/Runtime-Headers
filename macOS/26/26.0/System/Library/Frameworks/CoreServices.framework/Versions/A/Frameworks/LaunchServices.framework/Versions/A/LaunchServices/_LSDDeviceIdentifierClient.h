@interface _LSDDeviceIdentifierClient : _LSDClient <_LSDDeviceIdentifierProtocol>

- (void)computeIDFVForBundleURL:(id)a0 completion:(id /* block */)a1;
- (unsigned int)findAppBundleForExecutableURL:(id)a0 withContext:(struct LSContext { id x0; } *)a1;
- (void)clearAllIdentifiersOfType:(long long)a0;
- (BOOL)hasEntitlementToClearAllIdentifiersOfType:(long long)a0;
- (id)initWithXPCConnection:(id)a0;
- (void)getIdentifierOfType:(long long)a0 vendorName:(id)a1 completionHandler:(id /* block */)a2;
- (id)computeUUIDForSaltString:(id)a0;
- (BOOL)canAccessAdvertisingIdentifier;
- (void)getIdentifierOfType:(long long)a0 forApplicationAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)getIdentifierOfType:(long long)a0 completionHandler:(id /* block */)a1;

@end
