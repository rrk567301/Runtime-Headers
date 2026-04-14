@interface ACMExternalEnvironmentPreferences : ACMEnvironmentPreferences

+ (id)externalEnvironmentSpecifications;

- (id)defaultPublicKeyString;
- (id)serverHosts;
- (id)serverAttemptsDelays;
- (id)generateAndSendSecCodeURLString;
- (id)environmentSpecificationForRealm:(id)a0;
- (id)authenticateURLString;
- (id)verifyTicketURLString;
- (id)getTrustedDevicesURLString;
- (id)verifySecurityCodeURLString;
- (id)myAppleIDURL;

@end
