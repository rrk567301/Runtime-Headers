@class NSString;

@interface ABDefaultCustomizationPolicy : NSObject <ABAccountCustomizationPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customizationPolicy;

- (long long)sortOrder;
- (id)allContactsLabelForAccountName:(id)a0;
- (char)canBecomeDefaultAccount;
- (char)canReimportFromMetadata;
- (id)defaultAccountDescription;
- (id)directoryLabelForAccountName:(id)a0;
- (char)groupsCanRemoveMembers;
- (char)showAllContactsIfOnlyOneGroup;
- (char)supportsDistributionLists;
- (char)supportsPhoneticName;
- (char)supportsPhotos;
- (char)usesSyncServices;

@end
