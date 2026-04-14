@interface BRCSharingDestroyShareOperation : BRCSharingModifyShareOperation

- (id)createActivity;
- (void)main;
- (id)shareID;
- (id)initWithShare:(id)a0 zone:(id)a1 sessionContext:(id)a2;

@end
