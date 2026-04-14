@class NSMutableDictionary, NSMutableSet;

@interface _PSContactSuggesterForPeopleWidget : NSObject

@property (retain, nonatomic) NSMutableDictionary *candidateContacts;
@property (retain, nonatomic) NSMutableSet *priorityFamilyMembers;
@property (retain, nonatomic) NSMutableSet *nonpriorityFamilyMembers;

- (id)init;
- (void).cxx_destruct;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsWithIdentifiers:(id)a1;

@end
