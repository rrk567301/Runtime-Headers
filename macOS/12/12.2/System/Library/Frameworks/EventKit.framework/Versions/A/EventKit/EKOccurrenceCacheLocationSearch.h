@class NSString, CalAutoCompleteOperation, EKEventStore;

@interface EKOccurrenceCacheLocationSearch : NSObject <CalAutoCompleteDelegate>

@property (retain) CalAutoCompleteOperation *acOperation;
@property (copy) id /* block */ callback;
@property (retain) EKEventStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchWithCalendars:(id)a0 searchTerm:(id)a1 store:(id)a2 callback:(id /* block */)a3;

- (void)run;
- (void).cxx_destruct;
- (void)cancel;
- (id)searchTerm;
- (void)updatedAutoComplete:(id)a0;
- (void)setCNAutocompleteStore:(id)a0;
- (void)receivedBatchResultsFromServer:(id)a0 finished:(BOOL)a1;

@end
