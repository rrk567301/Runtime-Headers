@class ABAccount, NSString, NSArray, ABGroup;

@interface ABGroupEntry : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *localizedName;
@property (readonly, retain) ABAccount *account;
@property (readonly, copy) NSString *accountIdentifier;
@property (readonly, retain) ABGroup *group;
@property (readonly, copy) NSArray *children;
@property (readonly, copy) NSString *accessibilityDescription;
@property (readonly) BOOL isRestricted;

+ (id)identifierForGroupWithIdentifier:(id)a0;
+ (id)headerEntryWithName:(id)a0 account:(id)a1 children:(id)a2;
+ (id)accountEntryWithName:(id)a0 account:(id)a1 addressBook:(id)a2;
+ (id)groupEntryWithAccount:(id)a0 addressBook:(id)a1 group:(id)a2;
+ (id)smartGroupEntryWithAddressBook:(id)a0 smartGroup:(id)a1;
+ (id)searchingGroupEntryWithDirectory:(id)a0 addressBookForCreatingGroups:(id)a1;
+ (id)lastImportEntryWithName:(id)a0 addressBook:(id)a1;
+ (id)directoriesHeaderEntryWithDirectory:(id)a0 children:(id)a1;
+ (id)smartGroupsHeaderEntryWithName:(id)a0 children:(id)a1 addressBook:(id)a2;
+ (id)accountHeaderEntryWithName:(id)a0 account:(id)a1 children:(id)a2 addressBook:(id)a3;
+ (id)sectionEntryWithIdentifier:(id)a0 name:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)rowHeight;
- (long long)textAlignment;
- (id)initWithIdentifier:(id)a0 name:(id)a1;
- (id)addressBook;
- (BOOL)canRemoveMembers;
- (BOOL)canDeletePeople;
- (BOOL)canCreatePeople;
- (id)selectHelperWithFactory:(id)a0;
- (BOOL)isGroupItem;
- (BOOL)canDrop;
- (BOOL)canSelect;
- (id)tableViewIdentifier;
- (BOOL)canDelete;
- (BOOL)canDrag;
- (BOOL)canCreateGroup;
- (id)createHelperWithFactory:(id)a0;
- (BOOL)canCreateGroupFromSelection;
- (BOOL)containsPeople:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (BOOL)canCreateGroupInSection;
- (id)createGroupInSectionHelperWithFactory:(id)a0;
- (id)importFilesHelperWithFactory:(id)a0 filenames:(id)a1 showConfirmation:(BOOL)a2;
- (id)pasteHelperWithFactory:(id)a0;
- (id)nameWithStyleProvider:(id)a0;
- (BOOL)canRename;
- (BOOL)canEditDistributionLists;
- (BOOL)canExportGroupVCard;
- (BOOL)canSendEmailToGroup;
- (id)renameHelperWithFactory:(id)a0;
- (id)deleteHelperWithFactory:(id)a0;
- (BOOL)canCopy;
- (id)copyHelperWithFactory:(id)a0;
- (BOOL)canCut;
- (id)cutHelperWithFactory:(id)a0;
- (id)createSmartGroupHelperWithFactory:(id)a0;
- (id)createSmartGroupFromSearchHelperWithFactory:(id)a0;
- (BOOL)canEditSmartGroup;
- (id)editSmartGroupHelperWithFactory:(id)a0;
- (id)dropDestination;
- (id)dragSource;
- (BOOL)isAvailableInTimeMachine;
- (BOOL)canShowStatus;
- (BOOL)canShowStatusForAccountWithIdentifier:(id)a0;

@end
