@class NSString, CKKSControl, PCSCKKSItemModifyContext;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) CKKSControl *CKKSControl;
@property (retain) NSString *view;

- (void).cxx_destruct;
- (void)start;
- (id)initWithItemModifyContext:(id)a0;
- (BOOL)ensureControl;
- (void)checkTLKStatus;
- (void)syncView;

@end
