@class BRCAccountSession;

@interface BRCServerChangesApplier : NSObject

@property (readonly, nonatomic) BRCAccountSession *session;

- (void).cxx_destruct;
- (id)initWithAccountSession:(id)a0;
- (BOOL)_handleServerItemBRAliasIfNeeded:(id)a0 li:(id)a1;
- (void)applyChanges:(id)a0 localItem:(id)a1 rank:(long long)a2 zone:(id)a3 hasFinished:(BOOL *)a4;

@end
