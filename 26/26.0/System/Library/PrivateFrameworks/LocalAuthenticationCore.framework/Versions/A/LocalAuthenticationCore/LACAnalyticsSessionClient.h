@class NSString, NSXPCConnection;
@protocol LACAnalyticsSessionXPC, LACContext;

@interface LACAnalyticsSessionClient : NSObject <LACAnalyticsCollecting> {
    NSXPCConnection *_connection;
    id<LACContext> _context;
    id<LACAnalyticsSessionXPC> _session;
}

@property (retain, nonatomic) id<LACContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (id)_connectionWithError:(id *)a0;
- (void).cxx_destruct;
- (void)finishSession;
- (void)authenticationAction:(long long)a0 failing:(BOOL)a1;
- (void)authenticationAttemptFailedForEvent:(long long)a0;
- (void)authenticationStartedForEvent:(long long)a0;
- (void)authenticationSuccessfulForEvent:(long long)a0;
- (void)startSessionForDialogID:(id)a0 bundleID:(id)a1;
- (id)_bootstrapServiceWithError:(id *)a0;
- (id)_callBlockOnSynchronousRemoteObjectProxy:(id /* block */)a0;
- (void)_connectionDidClose:(BOOL)a0;
- (void)connectToExistingSession;

@end
