@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface FPSearchOnServerEnumerator : NSObject {
    NSString *_query;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_waitGroup;
    BOOL _finished;
    NSMutableDictionary *_inflightRequests;
    NSMutableSet *_initialRequests;
    NSMutableDictionary *_nextPages;
    NSMutableDictionary *_prefetchedResults;
    NSMutableDictionary *_extensionLifetimeExtenders;
}

+ (void)enumeratorForQuery:(id)a0 providerDomainID:(id)a1 desiredNumberOfResults:(long long)a2 completionHandler:(id /* block */)a3;

- (void)cancel;
- (void).cxx_destruct;
- (void)cancelOnQueue;
- (void)checkFinished;
- (void)finishProviderDomainID:(id)a0;
- (void)getNextResultSynchronouslyWithCompletionHandler:(id /* block */)a0;
- (id)initWithQuery:(id)a0 domainIDs:(id)a1;
- (id)initWithQuery:(id)a0 domainIDs:(id)a1 desiredNumberOfResults:(long long)a2;
- (void)nextResultsWithCompletionHandler:(id /* block */)a0;
- (void)requestResultsFromEnumerator:(id)a0 providerDomainID:(id)a1 atPage:(id)a2;
- (void)signalGroup;

@end
