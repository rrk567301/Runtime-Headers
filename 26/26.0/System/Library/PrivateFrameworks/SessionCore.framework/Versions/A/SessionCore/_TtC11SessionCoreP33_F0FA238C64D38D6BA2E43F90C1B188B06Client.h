@class NSString;

@interface _TtC11SessionCoreP33_F0FA238C64D38D6BA2E43F90C1B188B06Client : NSObject <ACActivityInputXPCServer> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ targetQueue;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ activityAuthorizer;
    void /* unknown type, empty encoding */ requester;
    void /* unknown type, empty encoding */ backoffPolicy;
    void /* unknown type, empty encoding */ pushServer;
    void /* unknown type, empty encoding */ backoffBudget;
    void /* unknown type, empty encoding */ ephemeralActivityIdentifiers;
    void /* unknown type, empty encoding */ uuid;
}

@property (nonatomic, readonly) NSString *description;

- (void)endActivityWithIdentifier:(id)a0 payload:(id)a1 options:(id)a2;
- (void)dealloc;
- (void)updateActivityWithIdentifier:(id)a0 payload:(id)a1;
- (void)mockPushWithChannelID:(id)a0 processIdentifier:(id)a1 environmentName:(id)a2 payload:(id)a3 pushPriority:(id)a4 completionHandler:(id /* block */)a5;
- (id)init;
- (void)mockPushWithToken:(id)a0 processIdentifier:(id)a1 environmentName:(id)a2 payload:(id)a3 pushPriority:(id)a4 completionHandler:(id /* block */)a5;
- (id)requestActivityWithRequest:(id)a0 alertConfiguration:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
