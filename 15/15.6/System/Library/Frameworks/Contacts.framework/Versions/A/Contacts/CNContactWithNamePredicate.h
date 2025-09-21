@class NSString;

@interface CNContactWithNamePredicate : CNPredicate <CNSuggestedContactPredicate, CNMAIDPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long options;

+ (char)supportsSecureCoding;
+ (id)descriptionForOptions:(unsigned long long)a0;
+ (char)doesPerson:(id)a0 matchName:(id)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 options:(unsigned long long)a1;
- (id)contactsFromCLSDataStore:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(char)a1 service:(id)a2 error:(id *)a3;

@end
