@interface ACMExternalEnvironmentPreferences : ACMEnvironmentPreferences

+ (id)externalEnvironmentSpecifications;

- (id)serverHosts;
- (id)serverAttemptsDelays;
- (id)environmentSpecificationForRealm:(id)a0;
- (id)authenticateURLString;
- (id)verifyTicketURLString;
- (id)defaultPublicKeyString;
- (id)getTrustedDevicesURLString;
- (id)generateAndSendSecCodeURLString;
- (id)verifySecurityCodeURLString;
- (id)myAppleIDURL;

@end
