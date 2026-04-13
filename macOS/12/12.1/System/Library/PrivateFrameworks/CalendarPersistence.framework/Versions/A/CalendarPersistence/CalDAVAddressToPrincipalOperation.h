@class CalDAVAccountInfoProvider, NSArray, NSOperationQueue, CalCalDAVTaskManager, NSMutableArray;

@interface CalDAVAddressToPrincipalOperation : CalSingleSynchronousTask {
    CalDAVAccountInfoProvider *_accountInfoProvider;
    NSOperationQueue *_opQueue;
}

@property (retain) NSMutableArray *discoveredPrincipals;
@property (retain) CalCalDAVTaskManager *taskManager;
@property (retain) NSArray *addresses;

+ (BOOL)_accountSupportsCUASetSearch:(id)a0;
+ (id)searchTaskForAddresses:(id)a0 withMappings:(id)a1 withMainAccountInfoProvider:(id)a2;
+ (void)checkHostForPrincipal:(id)a0 matchesBaseURL:(id)a1 inOperation:(id)a2 goodMatchBlock:(id /* block */)a3 noMatchBlock:(id /* block */)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAddresses:(id)a0 forAccountInfoProvider:(id)a1;
- (void)getPrincipalsSynchronously;

@end
