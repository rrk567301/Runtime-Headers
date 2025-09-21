@class NSURL;

@interface OSPInstallSignedManifestsOperation : OSPOperation

@property (retain) NSURL *sandboxURL;
@property (retain) NSURL *apTicketURL;

- (void)main;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_installSandbox;
- (BOOL)_copyAPTicketToSandbox;
- (BOOL)_copyExtraManifestRootsToSandbox;
- (BOOL)_copySignedManifestsToSandbox;
- (BOOL)_copySplatTicketToSandbox;
- (BOOL)_createSandboxDirectory;
- (BOOL)_findOSTicket;

@end
