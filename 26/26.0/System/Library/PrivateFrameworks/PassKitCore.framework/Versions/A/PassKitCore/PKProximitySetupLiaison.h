@interface PKProximitySetupLiaison : NSObject {
    id /* block */ _startTransferAuthorization;
    id /* block */ _endTransferAuthorization;
    id /* block */ _fetchMessageSession;
}

@property (readonly, nonatomic) BOOL hasFetchedMessageSession;

- (void).cxx_destruct;
- (void)endTransferAuthorization;
- (void)fetchMessageSessionWithCompletion:(id /* block */)a0;
- (id)initWithStartTransferAuthorization:(id /* block */)a0 endTransferAuthorization:(id /* block */)a1;
- (id)initWithStartTransferAuthorization:(id /* block */)a0 endTransferAuthorization:(id /* block */)a1 fetchMessageSession:(id /* block */)a2;
- (void)startTransferAuthorization;

@end
