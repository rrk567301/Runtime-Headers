@interface ADMInternetServices : NSObject

+ (id)sharedInternetServices;

- (char)isNSCProtocolEnabled:(id)a0;
- (char)remoteAEServerEnabled;
- (char)screensharingEnabled;
- (char)sshServerEnabled;
- (void)nscServerCancelShutdown:(id)a0 refNum:(unsigned int)a1;
- (char)setInetDServiceEnabled:(id)a0 enabled:(char)a1;
- (void)setSSHServerEnabled:(char)a0 completion:(id /* block */)a1;
- (struct __CFBundle { } *)_netFSServerFrameworkBundle;
- (char)faxReceiveEnabled;
- (char)ftpServerEnabled;
- (char)httpdEnabled;
- (char)isFTPServerAvailable;
- (char)isFaxReceiveAvailable;
- (char)isGuestForProtocolEnabled:(id)a0;
- (char)isHttpdAvailable;
- (char)isNSCProtocolAvailable:(id)a0;
- (char)isNSServerShuttingDown:(id)a0;
- (char)isOpticalDiscSharingEnabled;
- (char)isRemoteAEServerAvailable;
- (char)isSSHServerAvailable;
- (unsigned int)nscServerShutdown:(id)a0 withDelay:(int)a1;
- (long long)numberOfClientsForProtocols:(id)a0;
- (void)saveNatPrefs:(id)a0;
- (void)sendSIGHUPToEfax;
- (void)setFTPServerEnabled:(char)a0;
- (void)setFaxReceiveEnabled:(char)a0;
- (void)setFirewallConfigurationData:(id)a0;
- (void)setGuestForProtocol:(id)a0 enabled:(char)a1;
- (void)setHttpdEnabled:(char)a0;
- (char)setInetDServiceEnabled:(id)a0 enabled:(char)a1 completion:(id /* block */)a2;
- (void)setNSCProtocols:(id)a0 enabled:(char)a1;
- (void)setNSCProtocols:(id)a0 enabled:(char)a1 completion:(id /* block */)a2;
- (void)setOpticalDiscSharingEnabled:(char)a0;
- (void)setRemoteAEServerEnabled:(char)a0;
- (void)setSSHServerEnabled:(char)a0;
- (void)setScreensharingEnabled:(char)a0;

@end
