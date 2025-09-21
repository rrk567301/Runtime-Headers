@class NSDictionary, ABPersonListController, CNPublishingSubject;
@protocol CNCancelable;

@interface ABPersonListSearchHelper : NSObject

@property (retain, nonatomic) NSDictionary *cachedPersonEntriesByIdentifier;
@property (retain, nonatomic) NSDictionary *cachedSuggestionEntriesByIdentifier;
@property (weak, nonatomic) ABPersonListController *personListController;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (retain, nonatomic) CNPublishingSubject *searchObservable;
@property (retain, nonatomic) id<CNCancelable> localSearchSubscription;
@property (retain, nonatomic) id<CNCancelable> suggestionSearchSubscription;
@property (nonatomic) char includeSuggestions;

+ (char)entriesContainMeEntry:(id)a0;
+ (char)isDisplayingAllContactsGroupInPersonListController:(id)a0;
+ (char)isDisplayingTopLevelGroupInPersonListController:(id)a0;
+ (char)noAccountSelectedInPersonListController:(id)a0;
+ (void)removeAllRecordsFromAddressBook:(id)a0;
+ (char)shouldIncludeDonatedMeCardForPersonListController:(id)a0;
+ (char)shouldIncludeSuggestionsForPersonListController:(id)a0;
+ (id)suggestedMeEntryInEntries:(id)a0;
+ (id)uniqueSuggestedEntries:(id)a0 givenCuratedEntries:(id)a1;

- (void).cxx_destruct;
- (void)searchForString:(id)a0;
- (void)expandPersonEntriesCacheWithEntry:(id)a0;
- (id)fetchSuggestedEntriesByUID;
- (void)removeEntries:(id)a0;
- (id)augmentEntriesWithDonatedMeEntryIfFound:(id)a0;
- (void)cleaupPreviousSuggestions;
- (void)fetchLocalContacts;
- (id)fetchPersonEntriesByUID;
- (id)fetchSuggestedMeEntryByUID;
- (id)initWithPersonListController:(id)a0 resultHandler:(id /* block */)a1;
- (void)performEntryHandler;
- (void)performLocalSearch:(id)a0;
- (void)performSuggestionSearch:(id)a0;

@end
