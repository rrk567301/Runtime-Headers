@class NSString;

@interface ABDefaultCustomizationPolicy : NSObject <ABAccountCustomizationPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customizationPolicy;

- (long long)sortOrder;
- (BOOL)groupsCanRemoveMembers;
- (BOOL)supportsPhoneticName;
- (BOOL)supportsPhotos;
- (BOOL)canBecomeDefaultAccount;
- (BOOL)canReimportFromMetadata;
- (BOOL)showAllContactsIfOnlyOneGroup;
- (BOOL)supportsDistributionLists;
- (BOOL)usesSyncServices;
- (id)allContactsLabelForAccountName:(id)a0;
- (id)directoryLabelForAccountName:(id)a0;
- (id)defaultAccountDescription;

@end
