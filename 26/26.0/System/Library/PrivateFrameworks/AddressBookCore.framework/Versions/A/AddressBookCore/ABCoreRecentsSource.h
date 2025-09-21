@class CNContactStore;

@interface ABCoreRecentsSource : PHXSource

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) BOOL isAcceptedIntroductionsSource;

+ (BOOL)_userCanConfigure;
+ (int)backingStoreType;
+ (id)customizationPolicy;
+ (id)makeSearchPolicyWithAccount:(id)a0;
+ (Class)searchOperationClass;

- (int)sourceType;
- (void)awakeFromInsert;
- (id)name;
- (void).cxx_destruct;
- (BOOL)canCreatePeople;
- (BOOL)canRemoveGroup:(id)a0;
- (BOOL)canRenameGroup:(id)a0;
- (void)_sourceShouldRefresh;
- (id)abPersonFromCNContact:(id)a0;
- (void)addCNContactsToAddressBook:(id)a0;
- (void)awakeFromLoad;
- (BOOL)canBecomeDefaultAccount;
- (BOOL)canEditGroup:(id)a0;
- (BOOL)canEditPerson:(id)a0;
- (BOOL)canReimportFromMetadata;
- (void)commonAwake;
- (BOOL)groupsCanRemoveMembers;
- (id)initWithUID:(id)a0 persistence:(id)a1;
- (id)multiValueWithEmailAddresses:(id)a0;
- (id)multiValueWithLabeledValues:(id)a0 labeledWith:(id)a1 valueTransform:(id /* block */)a2;
- (id)multiValueWithPhoneNumbers:(id)a0;
- (void)purgeAddressBook;
- (int)searchMethod;
- (void)sourceDidSelect:(id)a0;
- (id)sourceIcon;
- (BOOL)supportsDistributionLists;
- (BOOL)supportsPhotos;
- (void)updateCoreRecentContacts;

@end
