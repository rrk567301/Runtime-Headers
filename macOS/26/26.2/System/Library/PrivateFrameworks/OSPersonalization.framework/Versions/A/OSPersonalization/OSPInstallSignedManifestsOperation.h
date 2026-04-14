@class NSURL;

@interface OSPInstallSignedManifestsOperation : OSPOperation

@property (retain) NSURL *sandboxURL;
@property (retain) NSURL *apTicketURL;

- (void)main;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_installSandbox;
- (BOOL)_copyAPTicketToSandbox;
- (BOOL)_copyExtraManifestRootsToSandbox;
- (BOOL)_copySignedManifestsToSandbox;
- (BOOL)_copySplatTicketToSandbox;
- (BOOL)_createSandboxDirectory;
- (BOOL)_findOSTicket;

@end
