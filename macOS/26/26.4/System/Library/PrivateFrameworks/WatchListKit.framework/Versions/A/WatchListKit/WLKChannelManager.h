@class NSXPCConnection;

@interface WLKChannelManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)defaultChannelManager;

- (void)_invalidationHandler;
- (void).cxx_destruct;
- (void)vppaConsentedBundleIDsWithCompletion:(id /* block */)a0;

@end
