@class ABSmartGroup, ABAddressBook;

@interface ABSmartGroupBrowsingGroupEntry : ABBrowsingGroupEntry

@property (readonly, retain) ABAddressBook *addressBook;
@property (readonly, retain) ABSmartGroup *smartGroup;

- (id)group;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)description;
- (BOOL)canCut;
- (BOOL)canCopy;
- (BOOL)canDrop;
- (BOOL)containsPeople:(id)a0;
- (id)initWithAddressBook:(id)a0 smartGroup:(id)a1;
- (id)actionScope;
- (BOOL)canCreateGroup;
- (BOOL)canEditDistributionLists;
- (BOOL)canEditSmartGroup;
- (BOOL)canRename;
- (BOOL)canSendEmailToGroup;
- (id)copyHelperWithFactory:(id)a0;
- (id)cutHelperWithFactory:(id)a0;
- (id)deleteHelperWithFactory:(id)a0;
- (id)editSmartGroupHelperWithFactory:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)renameHelperWithFactory:(id)a0;

@end
