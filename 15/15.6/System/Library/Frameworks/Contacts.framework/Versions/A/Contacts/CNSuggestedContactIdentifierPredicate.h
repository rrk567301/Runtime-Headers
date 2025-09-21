@class NSString;

@interface CNSuggestedContactIdentifierPredicate : CNPredicate <CNSuggestedContactPredicate, CNCDContactPredicate>

@property (readonly) unsigned long long suggestionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (char)cn_supportsNativeSorting;
- (id)initWithSuggestionIdentifier:(unsigned long long)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(char)a1 service:(id)a2 error:(id *)a3;

@end
