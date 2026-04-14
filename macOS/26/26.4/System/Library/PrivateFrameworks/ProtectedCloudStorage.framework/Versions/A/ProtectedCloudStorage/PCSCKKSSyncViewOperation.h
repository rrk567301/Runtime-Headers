@class CKKSControl, PCSCKKSItemModifyContext;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) CKKSControl *CKKSControl;

- (void).cxx_destruct;
- (void)start;
- (void)checkTLKStatus;
- (BOOL)ensureControl;
- (id)initWithItemModifyContext:(id)a0;
- (void)syncView;

@end
