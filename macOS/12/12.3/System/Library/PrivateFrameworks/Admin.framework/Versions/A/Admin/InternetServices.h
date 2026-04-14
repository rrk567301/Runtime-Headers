@interface InternetServices : NSObject

+ (id)sharedInternetServices;

- (void)setHttpdEnabled:(BOOL)a0;
- (void)setRemoteAEServerEnabled:(BOOL)a0;
- (BOOL)remoteAEServerEnabled;
- (BOOL)setInetDServiceEnabled:(id)a0 enabled:(BOOL)a1;
- (void)setSSHServerEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)setInetDServiceEnabled:(id)a0 enabled:(BOOL)a1 completion:(id /* block */)a2;
- (struct __CFBundle { } *)_netFSServerFrameworkBundle;
- (void)setNSCProtocols:(id)a0 enabled:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)ftpServerEnabled;
- (void)setFTPServerEnabled:(BOOL)a0;
- (BOOL)isFTPServerAvailable;
- (BOOL)sshServerEnabled;
- (void)setSSHServerEnabled:(BOOL)a0;
- (BOOL)isSSHServerAvailable;
- (BOOL)isRemoteAEServerAvailable;
- (BOOL)faxReceiveEnabled;
- (void)setFaxReceiveEnabled:(BOOL)a0;
- (BOOL)isFaxReceiveAvailable;
- (BOOL)httpdEnabled;
- (BOOL)isHttpdAvailable;
- (void)saveNatPrefs:(id)a0;
- (BOOL)isOpticalDiscSharingEnabled;
- (void)setOpticalDiscSharingEnabled:(BOOL)a0;
- (BOOL)screensharingEnabled;
- (void)setScreensharingEnabled:(BOOL)a0;
- (void)sendSIGHUPToEfax;
- (BOOL)isNSCProtocolEnabled:(id)a0;
- (unsigned int)nscServerShutdown:(id)a0 withDelay:(int)a1;
- (BOOL)isNSServerShuttingDown:(id)a0;
- (void)nscServerCancelShutdown:(id)a0 refNum:(unsigned int)a1;
- (void)setNSCProtocols:(id)a0 enabled:(BOOL)a1;
- (BOOL)isNSCProtocolAvailable:(id)a0;
- (long long)numberOfClientsForProtocols:(id)a0;
- (BOOL)isGuestForProtocolEnabled:(id)a0;
- (void)setGuestForProtocol:(id)a0 enabled:(BOOL)a1;

@end
