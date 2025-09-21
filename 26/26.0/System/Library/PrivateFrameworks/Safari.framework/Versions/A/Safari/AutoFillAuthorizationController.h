@class LAAuthenticationSheetController, LAContext, NSView, NSData, AutoFillLocalAuthenticationManager;

@interface AutoFillAuthorizationController : NSObject {
    LAAuthenticationSheetController *_sheetController;
    LAContext *_currentLAContext;
    AutoFillLocalAuthenticationManager *_localAuthenticationManager;
}

@property (readonly, nonatomic) NSData *currentExternalizedContext;
@property (readonly, nonatomic) NSView *view;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginSheetForWindow:(id)a0 completion:(id /* block */)a1;
- (void)endSheet;
- (void)_didToggleTouchIDToAutoFill:(id)a0;
- (BOOL)_isSafariAutoFillEnabledAndTouchIDOnDevice;
- (id)initWithItemName:(id)a0 autoFillAction:(long long)a1 localAuthenticationManager:(id)a2 itemIsFromPasswords:(BOOL)a3;

@end
