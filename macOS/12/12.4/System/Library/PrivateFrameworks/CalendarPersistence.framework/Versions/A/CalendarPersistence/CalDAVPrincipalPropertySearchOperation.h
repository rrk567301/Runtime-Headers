@class NSSet, NSMutableArray, CalDAVSession;

@interface CalDAVPrincipalPropertySearchOperation : CalSingleSynchronousTask {
    CalDAVSession *_session;
    NSSet *_searchStrings;
    NSSet *_searchTypes;
    id delegate;
    BOOL _isRunning;
    BOOL _attendeeMultipleStringPrefixSearch;
}

@property (readonly) NSMutableArray *results;

+ (void)submitSearchForPrincipal:(id)a0 forStrings:(id)a1 ofType:(id)a2 withReply:(id /* block */)a3;

- (void).cxx_destruct;
- (id)managedPrincipalInContext:(id)a0;
- (id)initWithSession:(id)a0 forStrings:(id)a1 ofTypes:(id)a2;
- (void)performSynchronousSearch;
- (void)processCompletedRequest:(id)a0;

@end
