@interface CalUICertificatePanelController : NSObject

+ (id)sharedController;

- (char)showCertificatePanelForError:(id)a0 andRefreshSourceIfUserAcceptsCert:(id)a1;
- (char)showCertificatePanelForError:(id)a0;
- (char)showCertificatePanelForError:(id)a0 andRefreshSourceIfUserAcceptsCert:(id)a1 completion:(id /* block */)a2;
- (char)showCertificatePanelForError:(id)a0 forAccountID:(id)a1 refreshEventStoreIfUserAcceptsCert:(id)a2 completion:(id /* block */)a3;

@end
