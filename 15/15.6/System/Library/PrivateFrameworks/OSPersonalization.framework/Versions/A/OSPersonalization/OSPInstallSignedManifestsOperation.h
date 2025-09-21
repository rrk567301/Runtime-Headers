@class NSURL;

@interface OSPInstallSignedManifestsOperation : OSPOperation

@property (retain) NSURL *sandboxURL;
@property (retain) NSURL *apTicketURL;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (char)_installSandbox;
- (char)_copyAPTicketToSandbox;
- (char)_copyExtraManifestRootsToSandbox;
- (char)_copySignedManifestsToSandbox;
- (char)_copySplatTicketToSandbox;
- (char)_createSandboxDirectory;
- (char)_findOSTicket;

@end
