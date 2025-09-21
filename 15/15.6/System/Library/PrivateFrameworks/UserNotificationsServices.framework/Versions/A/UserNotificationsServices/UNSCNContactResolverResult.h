@class NSString;

@interface UNSCNContactResolverResult : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *cnContactIdentifier;
@property (readonly, copy, nonatomic) NSString *cnContactFullname;
@property (readonly, nonatomic, getter=isSuggestedContact) char suggestedContact;
@property (readonly, nonatomic) unsigned long long matchType;
@property (readonly, nonatomic, getter=isMatchTypeSuggested) char matchTypeSuggested;
@property (readonly, copy, nonatomic) NSString *identifierOfMatchLabel;
@property (readonly, nonatomic, getter=isStrongestMatch) char strongestMatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultWithCNContactIdentifier:(id)a0 cnContactFullname:(id)a1 suggestedContact:(char)a2 matchType:(unsigned long long)a3 matchTypeSuggested:(char)a4 identifierOfMatchLabel:(id)a5;

- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_initWithCNContactIdentifier:(id)a0 cnContactFullname:(id)a1 suggestedContact:(char)a2 matchType:(unsigned long long)a3 matchTypeSuggested:(char)a4 identifierOfMatchLabel:(id)a5;
- (id)_stringForMatchType:(unsigned long long)a0;
- (char)isStrongerMatchThanOtherMatch:(id)a0;

@end
