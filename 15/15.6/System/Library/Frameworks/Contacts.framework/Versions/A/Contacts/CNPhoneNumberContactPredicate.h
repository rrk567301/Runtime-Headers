@class NSString, NSArray, CNPhoneNumber;

@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate, CNCDContactPredicate> {
    char _returnsMultipleResults;
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

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDebugDescription;
- (id)cn_coreDataPredicate;
- (char)cn_hasHighSpecificity;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (char)includeResult:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(char)a1 service:(id)a2 error:(id *)a3;

@end
