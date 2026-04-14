@class NSString, NSArray;

@interface CNEmailAddressContactPredicate : CNPredicate <CNSuggestedContactPredicate, CNMAIDPredicate, CNCoreRecentsPredicate, CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *groupIdentifiers;
@property (readonly, nonatomic) BOOL returnsMultipleResults;

+ (BOOL)supportsSecureCoding;

- (BOOL)canSearchCoreRecentsLibrary:(id)a0;
- (BOOL)cn_hasHighSpecificity;
- (id)contactsFromCLSDataStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEmailAddress:(id)a0 returnMultipleResults:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDebugDescription;
- (id)initWithCoder:(id)a0;
- (id)contactsFromRecentsLibrary:(id)a0;
- (id)initWithEmailAddress:(id)a0 groupIdentifiers:(id)a1 returnMultipleResults:(BOOL)a2;
- (long long)countOfContactsFromRecentsLibrary:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (id)cn_coreDataPredicate;

@end
