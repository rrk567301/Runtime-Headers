@class LAUIAuthenticationSheetAdapter, LAUIAuthorizationSheetDispatcher;

@interface LAUIAuthorizationSheetController : NSObject {
    LAUIAuthenticationSheetAdapter *_sheet;
    LAUIAuthorizationSheetDispatcher *_dispatcher;
}

- (id)init;
- (void).cxx_destruct;
- (void)authorizeRights:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)authorizeRights:(id)a0 completion:(id /* block */)a1;
- (void)authorizeRights:(id)a0 inPresentationContext:(id)a1 completion:(id /* block */)a2;
- (void)authorizeRights:(id)a0 inPresentationContext:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
