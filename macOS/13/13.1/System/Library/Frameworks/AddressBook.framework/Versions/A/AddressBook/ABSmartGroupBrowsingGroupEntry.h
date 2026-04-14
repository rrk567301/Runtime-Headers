@class ABSmartGroup, ABAddressBook;

@interface ABSmartGroupBrowsingGroupEntry : ABBrowsingGroupEntry

@property (readonly, retain) ABAddressBook *addressBook;
@property (readonly, retain) ABSmartGroup *smartGroup;

- (id)description;
- (void).cxx_destruct;
- (id)group;
- (BOOL)canDrop;
- (BOOL)canDelete;
- (id)actionScope;
- (BOOL)canCreateGroup;
- (BOOL)containsPeople:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (BOOL)canRename;
- (BOOL)canEditDistributionLists;
- (BOOL)canSendEmailToGroup;
- (id)renameHelperWithFactory:(id)a0;
- (id)deleteHelperWithFactory:(id)a0;
- (BOOL)canCopy;
- (id)copyHelperWithFactory:(id)a0;
- (BOOL)canCut;
- (id)cutHelperWithFactory:(id)a0;
- (BOOL)canEditSmartGroup;
- (id)editSmartGroupHelperWithFactory:(id)a0;
- (id)initWithAddressBook:(id)a0 smartGroup:(id)a1;

@end
