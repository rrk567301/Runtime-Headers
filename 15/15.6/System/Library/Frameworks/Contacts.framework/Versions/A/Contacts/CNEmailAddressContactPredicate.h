@class NSString, NSArray;

@interface CNEmailAddressContactPredicate : CNPredicate <CNSuggestedContactPredicate, CNMAIDPredicate, CNCDContactPredicate>

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
@property (readonly, nonatomic) char returnsMultipleResults;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDebugDescription;
- (id)cn_coreDataPredicate;
- (char)cn_hasHighSpecificity;
- (id)contactsFromCLSDataStore:(id)a0;
- (id)initWithEmailAddress:(id)a0 groupIdentifiers:(id)a1 returnMultipleResults:(char)a2;
- (id)initWithEmailAddress:(id)a0 returnMultipleResults:(char)a1;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(char)a1 service:(id)a2 error:(id *)a3;

@end
