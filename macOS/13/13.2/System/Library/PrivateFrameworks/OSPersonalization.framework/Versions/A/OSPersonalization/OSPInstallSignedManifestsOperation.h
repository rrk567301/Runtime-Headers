@class NSURL;

@interface OSPInstallSignedManifestsOperation : OSPOperation

@property (retain) NSURL *sandboxURL;
@property (retain) NSURL *apTicketURL;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (BOOL)_installSandbox;
- (BOOL)_createSandboxDirectory;
- (BOOL)_findAPTicket;
- (BOOL)_copyAPTicketToSandbox;
- (BOOL)_copySplatTicketToSandbox;
- (BOOL)_copySignedManifestsToSandbox;

@end
