@class CKKSControl, PCSCKKSItemModifyContext;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) CKKSControl *CKKSControl;

- (void)start;
- (void).cxx_destruct;
- (void)checkTLKStatus;
- (BOOL)ensureControl;
- (id)initWithItemModifyContext:(id)a0;
- (void)syncView;

@end
