@class NSString, NSArray, NSMutableDictionary;

@interface CNContactsWithIdentifiersPredicate : CNPredicate <CNCoreRecentsPredicate, CNCDContactPredicate, CNSuggestedContactPredicate> {
    NSMutableDictionary *_internalIdentifiers;
}

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
@property (readonly, copy, nonatomic) NSArray *identifiers;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)cn_supportsNativeSorting;
- (BOOL)cn_hasHighSpecificity;
- (BOOL)isEqual:(id)a0;
- (id)internalIdentifiersForStoreWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)suggestionsWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (BOOL)canSearchCoreRecentsLibrary:(id)a0;
- (void).cxx_destruct;
- (id)contactsFromRecentsLibrary:(id)a0;
- (long long)countOfContactsFromRecentsLibrary:(id)a0;
- (id)contactsFromDonationStore:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (id)cn_coreDataPredicate;

@end
