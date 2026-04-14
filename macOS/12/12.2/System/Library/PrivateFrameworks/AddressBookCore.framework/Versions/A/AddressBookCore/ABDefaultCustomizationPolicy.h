@class NSString;

@interface ABDefaultCustomizationPolicy : NSObject <ABAccountCustomizationPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customizationPolicy;

- (long long)sortOrder;
- (BOOL)canBecomeDefaultAccount;
- (BOOL)groupsCanRemoveMembers;
- (BOOL)canReimportFromMetadata;
- (BOOL)supportsDistributionLists;
- (BOOL)showAllContactsIfOnlyOneGroup;
- (BOOL)usesSyncServices;
- (BOOL)supportsPhoneticName;
- (BOOL)supportsPhotos;
- (id)allContactsLabelForAccountName:(id)a0;
- (id)directoryLabelForAccountName:(id)a0;
- (id)defaultAccountDescription;

@end
