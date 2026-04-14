@interface BRCSharingSaveShareOperation : BRCSharingModifyShareOperation

- (id)createActivity;
- (void)main;
- (id)initWithShare:(id)a0 zone:(id)a1 sessionContext:(id)a2;
- (void)performAfterUnsharingParentShareTurdIfNecessary:(id /* block */)a0;

@end
