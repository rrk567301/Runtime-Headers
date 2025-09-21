@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CNCancelable;

@interface _CSContactSearch : NSObject <CNAutocompleteFetchDelegate> {
    NSMutableArray *_accumulatedContacts;
    unsigned long long _startTime;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) char autocompleteEnabled;
@property (readonly, nonatomic) char includeRecents;
@property (retain, nonatomic) id<CNCancelable> autocompleteRequest;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) char finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autocompleteStore;
+ (id)contactStore;
+ (char)doesContactMatchTerm:(id)a0 contact:(id)a1;
+ (id)filterContactsBasedOnUserQueryString:(id)a0 contacts:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)startAutocompleteContactsSearch;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (id)contactsMatchingQuery:(id)a0 error:(id *)a1;
- (void)handleCompletionWithContacts:(id)a0 error:(id)a1;
- (id)initWithQuery:(id)a0 queryID:(unsigned long long)a1 autocompleteEnabled:(char)a2;
- (void)startContactsSearch;

@end
