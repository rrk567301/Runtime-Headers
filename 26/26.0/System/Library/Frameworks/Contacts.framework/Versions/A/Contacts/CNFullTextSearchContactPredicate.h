@class NSString, NSArray;

@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate, CNCoreRecentsPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, copy, nonatomic) NSArray *containerIdentifiers;
@property (readonly, copy, nonatomic) NSArray *groupIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)canSearchCoreRecentsLibrary:(id)a0;
- (long long)countOfContactsFromRecentsLibrary:(id)a0;
- (void).cxx_destruct;
- (id)contactsFromRecentsLibrary:(id)a0;
- (id)handleMatchInfoForContact:(id)a0;
- (id)initWithSearchString:(id)a0 containerIdentifiers:(id)a1 groupIdentifiers:(id)a2;
- (id)nameMatchInfoForContact:(id)a0;

@end
