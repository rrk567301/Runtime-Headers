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
@property (readonly) char isRestricted;
@property (readonly) char isProvisional;

+ (id)accountEntryWithName:(id)a0 account:(id)a1 addressBook:(id)a2;
+ (id)accountHeaderEntryWithName:(id)a0 account:(id)a1 children:(id)a2 addressBook:(id)a3;
+ (id)directoriesHeaderEntryWithDirectory:(id)a0 children:(id)a1;
+ (id)groupEntryWithAccount:(id)a0 addressBook:(id)a1 group:(id)a2;
+ (id)headerEntryWithName:(id)a0 account:(id)a1 children:(id)a2;
+ (id)identifierForGroupWithIdentifier:(id)a0;
+ (id)lastImportEntryWithName:(id)a0 addressBook:(id)a1;
+ (id)provisionalEntryForEditingNewGroup;
+ (id)searchingGroupEntryWithDirectory:(id)a0 addressBookForCreatingGroups:(id)a1;
+ (id)sectionEntryWithIdentifier:(id)a0 name:(id)a1;
+ (id)smartGroupEntryWithAddressBook:(id)a0 smartGroup:(id)a1;
+ (id)smartGroupsHeaderEntryWithName:(id)a0 children:(id)a1 addressBook:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isGroupItem;
- (double)rowHeight;
- (long long)textAlignment;
- (id)initWithIdentifier:(id)a0 name:(id)a1;
- (char)canDeletePeople;
- (char)canCreatePeople;
- (id)addressBook;
- (char)canRemoveMembers;
- (char)canDrop;
- (char)canSelect;
- (id)selectHelperWithFactory:(id)a0;
- (id)tableViewIdentifier;
- (char)canDelete;
- (char)canDrag;
- (char)canCopy;
- (char)containsPeople:(id)a0;
- (id)dropDestination;
- (char)canCreateGroup;
- (char)canCreateGroupFromSelection;
- (char)canCreateGroupInSection;
- (char)canCut;
- (char)canEditDistributionLists;
- (char)canEditSmartGroup;
- (char)canExportGroupVCard;
- (char)canRename;
- (char)canSendEmailToGroup;
- (char)canShowStatus;
- (char)canShowStatusForAccountWithIdentifier:(id)a0;
- (id)copyHelperWithFactory:(id)a0;
- (id)createGroupInSectionHelperWithFactory:(id)a0;
- (id)createHelperWithFactory:(id)a0;
- (id)createSmartGroupFromSearchHelperWithFactory:(id)a0;
- (id)createSmartGroupHelperWithFactory:(id)a0;
- (id)cutHelperWithFactory:(id)a0;
- (id)deleteHelperWithFactory:(id)a0;
- (id)dragSource;
- (id)editSmartGroupHelperWithFactory:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)importFilesHelperWithFactory:(id)a0 filenames:(id)a1 showConfirmation:(char)a2;
- (char)isAvailableInTimeMachine;
- (id)nameWithStyleProvider:(id)a0;
- (id)pasteHelperWithFactory:(id)a0;
- (id)renameHelperWithFactory:(id)a0;

@end
