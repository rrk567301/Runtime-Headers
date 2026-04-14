@interface CalUICertificatePanelController : NSObject

+ (id)sharedController;

- (BOOL)showCertificatePanelForError:(id)a0 andRefreshSourceIfUserAcceptsCert:(id)a1;
- (BOOL)showCertificatePanelForError:(id)a0 andRefreshSourceIfUserAcceptsCert:(id)a1 completion:(id /* block */)a2;
- (BOOL)showCertificatePanelForError:(id)a0;

@end
