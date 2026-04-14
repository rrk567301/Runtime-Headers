@interface BRCSharingCopyShareURLOperation : BRCSharingModifyShareOperation

- (id)createActivity;
- (void)main;
- (void)_completedWithURL:(id)a0 error:(id)a1;
- (id)initWithShare:(id)a0 zone:(id)a1 sessionContext:(id)a2;

@end
