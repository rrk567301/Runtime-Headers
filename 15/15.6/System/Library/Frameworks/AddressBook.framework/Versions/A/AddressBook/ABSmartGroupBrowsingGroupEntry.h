@class ABSmartGroup, ABAddressBook;

@interface ABSmartGroupBrowsingGroupEntry : ABBrowsingGroupEntry

@property (readonly, retain) ABAddressBook *addressBook;
@property (readonly, retain) ABSmartGroup *smartGroup;

- (id)description;
- (void).cxx_destruct;
- (id)group;
- (char)canDrop;
- (char)canDelete;
- (char)canCopy;
- (char)containsPeople:(id)a0;
- (id)initWithAddressBook:(id)a0 smartGroup:(id)a1;
- (id)actionScope;
- (char)canCreateGroup;
- (char)canCut;
- (char)canEditDistributionLists;
- (char)canEditSmartGroup;
- (char)canRename;
- (char)canSendEmailToGroup;
- (id)copyHelperWithFactory:(id)a0;
- (id)cutHelperWithFactory:(id)a0;
- (id)deleteHelperWithFactory:(id)a0;
- (id)editSmartGroupHelperWithFactory:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)renameHelperWithFactory:(id)a0;

@end
