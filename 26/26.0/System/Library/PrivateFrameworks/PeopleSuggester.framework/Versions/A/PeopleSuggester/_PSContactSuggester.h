@class CNContactStore, _CDInteractionStore, NSXPCConnection, _PSContactResolver;

@interface _PSContactSuggester : NSObject {
    _PSContactResolver *contactResolver;
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) CNContactStore *contactStore;

+ (id)defaultCorrelationsSessionFileForContactPriors;
+ (id)_cascadeContentForPriorsArchive:(id)a0;
+ (id)contactPriorSuggestionsForText:(id)a0;
+ (id)_cascadeContentForPriorsArchive:(id)a0 cascadeContactEnumerator:(id /* block */)a1;
+ (id)_filteredContactDictionaryFromCascadeContent:(id)a0 forContactIdentifiers:(id)a1;
+ (void)_writeArchiveToCascade:(id)a0;
+ (id)_cascadeContentForContactPriors;

- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsByIdentifiers:(id)a1 lookBackDays:(long long)a2 interactions:(id)a3 modeAvocado:(BOOL)a4 interactionHistoryCap:(long long)a5;
- (id)iMessageDomainIdentifiersForDomainIdentifiers:(id)a0;
- (void)gameCenterSuggestionConsumedWithGroupIdentifier:(id)a0;
- (id)computeContactPriorsForContactIdentifiers:(id)a0 withTimeConstant:(long long)a1 withInteractionMechanisms:(id)a2 asOf:(id)a3 overLookbackOf:(long long)a4;
- (void)peopleWidgetFeedbackWithContactIdentifier:(id)a0;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsByIdentifiers:(id)a1 lookBackDays:(long long)a2 interactions:(id)a3 modeAvocado:(BOOL)a4;
- (void)dealloc;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 interactionDomains:(id)a1 referenceDate:(id)a2 appleUsersOnly:(BOOL)a3 includeGroups:(BOOL)a4 excludeContactsByIdentifiers:(id)a5;
- (id)gameCenterSuggestionsWithMaxSuggestions:(long long)a0 interactionDomains:(id)a1 appleUsersOnly:(BOOL)a2;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsWithIdentifiers:(id)a1;
- (id)contactKeysToFetch;
- (float)sigmoid:(float)a0;
- (void)computeAndSaveContactPriorArchive;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 contactKeysTofetch:(id)a1 interactionDomains:(id)a2 appleUsersOnly:(BOOL)a3;
- (id)init;
- (id)contactPriorsForContactIdentifiers:(id)a0;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsByIdentifiers:(id)a1;
- (id)gameCenterSuggestionsWithMaxSuggestions:(long long)a0 interactionDomains:(id)a1 appleUsersOnly:(BOOL)a2 includeGroupSuggestions:(BOOL)a3 excludeContactsByIdentifiers:(id)a4;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 interactionDomains:(id)a1 referenceDate:(id)a2 appleUsersOnly:(BOOL)a3 includeGroups:(BOOL)a4;
- (void)peopleWidgetFeedbackWithContactHandle:(id)a0;
- (id)contactsWithMaxSuggestions:(long long)a0 contactKeysTofetch:(id)a1 interactionDomains:(id)a2 referenceDate:(id)a3 appleUsersOnly:(BOOL)a4;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 interactionDomains:(id)a1 appleUsersOnly:(BOOL)a2;
- (id)getDefaultContactPriorForContactId:(id)a0 withModelName:(id)a1 withModelVersion:(id)a2;
- (id)computeContactPriorsForContactIdentifiers:(id)a0;
- (void)gameCenterSuggestionConsumedWithContactHandle:(id)a0;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsByIdentifiers:(id)a1 interactionHistoryCap:(long long)a2;
- (id)contactAndGroupSuggestionsWithMaxSuggestions:(long long)a0 lookBackDays:(long long)a1 interactions:(id)a2;
- (void)writeArchive:(id)a0;
- (void).cxx_destruct;
- (float)decayForReferenceDate:(id)a0 relativeTo:(id)a1 withTimeConstant:(double)a2;
- (id)contactSuggestionsForPeopleWidgetWithMaxSuggestions:(long long)a0 excludeContactsWithIdentifiers:(id)a1;

@end
