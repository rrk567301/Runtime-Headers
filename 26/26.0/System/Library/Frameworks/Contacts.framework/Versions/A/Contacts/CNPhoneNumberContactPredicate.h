@class NSString, NSArray, CNPhoneNumber;

@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate, CNCoreRecentsPredicate, CNCDContactPredicate> {
    BOOL _returnsMultipleResults;
    CNPhoneNumber *_phoneNumber;
    NSString *_prefixHint;
    NSString *_digits;
    NSString *_countryCode;
    NSArray *_groupIdentifiers;
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

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (id)shortDebugDescription;
- (id)cn_coreDataPredicate;
- (BOOL)canSearchCoreRecentsLibrary:(id)a0;
- (unsigned long long)countOfContactsFromRecentsLibrary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)contactsFromRecentsLibrary:(id)a0;
- (BOOL)cn_hasHighSpecificity;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (BOOL)includeResult:(id)a0;

@end
