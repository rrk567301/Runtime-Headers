@class BSServiceConnection;

@interface FUAccessibilityService : NSObject <FUAccessibilityServiceServerToClientInterface> {
    BSServiceConnection *_connection;
}

+ (id)identifier;
+ (id)interface;

- (void)invalidate;
- (id)_target;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enableApplicationAccessibilityWithCompletion:(id /* block */)a0;

@end
