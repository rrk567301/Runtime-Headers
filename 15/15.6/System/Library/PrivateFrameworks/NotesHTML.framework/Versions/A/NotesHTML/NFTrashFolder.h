@class NFAccount;

@interface NFTrashFolder : NFFolder

@property (retain, nonatomic) NFAccount *trashAccount;

- (void)awakeFromInsert;
- (void)emptyContents;
- (char)validateParent:(inout id *)a0 error:(out id *)a1;

@end
