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
@property (nonatomic) BOOL includeSuggestions;

+ (BOOL)entriesContainMeEntry:(id)a0;
+ (BOOL)shouldIncludeDonatedMeCardForPersonListController:(id)a0;
+ (BOOL)shouldIncludeSuggestionsForPersonListController:(id)a0;
+ (id)uniqueSuggestedEntries:(id)a0 givenCuratedEntries:(id)a1;
+ (void)removeAllRecordsFromAddressBook:(id)a0;
+ (id)suggestedMeEntryInEntries:(id)a0;
+ (BOOL)noAccountSelectedInPersonListController:(id)a0;
+ (BOOL)isDisplayingAllContactsGroupInPersonListController:(id)a0;
+ (BOOL)isDisplayingTopLevelGroupInPersonListController:(id)a0;

- (void).cxx_destruct;
- (id)fetchSuggestedEntriesByUID;
- (void)expandPersonEntriesCacheWithEntry:(id)a0;
- (void)searchForString:(id)a0;
- (id)initWithPersonListController:(id)a0 resultHandler:(id /* block */)a1;
- (void)fetchLocalContacts;
- (void)removeEntries:(id)a0;
- (void)performLocalSearch:(id)a0;
- (void)performSuggestionSearch:(id)a0;
- (void)cleaupPreviousSuggestions;
- (void)performEntryHandler;
- (id)fetchPersonEntriesByUID;
- (id)augmentEntriesWithDonatedMeEntryIfFound:(id)a0;
- (id)fetchSuggestedMeEntryByUID;

@end
