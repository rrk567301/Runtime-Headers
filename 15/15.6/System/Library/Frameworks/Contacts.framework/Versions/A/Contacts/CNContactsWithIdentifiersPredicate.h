@class NSString, NSArray, NSMutableDictionary;

@interface CNContactsWithIdentifiersPredicate : CNPredicate <CNCDContactPredicate, CNSuggestedContactPredicate> {
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
@property (readonly, copy, nonatomic) NSArray *identifiers;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (id)cn_coreDataPredicate;
- (char)cn_hasHighSpecificity;
- (char)cn_supportsNativeSorting;
- (id)contactsFromDonationStore:(id)a0;
- (id)internalIdentifiersForStoreWithIdentifier:(id)a0;
- (id)suggestionsWithSortOrder:(long long)a0 mutableObjects:(char)a1 service:(id)a2 error:(id *)a3;

@end
