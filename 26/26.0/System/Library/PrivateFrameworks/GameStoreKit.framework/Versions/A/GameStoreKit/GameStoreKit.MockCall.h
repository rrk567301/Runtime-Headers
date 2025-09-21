@interface GameStoreKit.MockCall : TUProxyCall {
    void /* unknown type, empty encoding */ mockStatus;
    void /* unknown type, empty encoding */ mockIsConnected;
}

@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic, readonly) double callDuration;

- (BOOL)isConnected;
- (id)init;
- (id)initWithNotificationCenter:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCall:(id)a0;
- (id)initWithUniqueProxyIdentifier:(id)a0;
- (id)initWithUniqueProxyIdentifier:(id)a0 endpointOnCurrentDevice:(BOOL)a1;
- (id)initWithUniqueProxyIdentifier:(id)a0 endpointOnCurrentDevice:(BOOL)a1 notificationCenter:(id)a2;

@end
