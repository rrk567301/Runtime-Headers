@class BSServiceConnection;

@interface FUAccessibilityService : NSObject <FUAccessibilityServiceServerToClientInterface> {
    BSServiceConnection *_connection;
}

+ (id)identifier;
+ (id)interface;

- (void)dealloc;
- (id)_target;
- (void).cxx_destruct;
- (void)invalidate;
- (void)enableApplicationAccessibilityWithCompletion:(id /* block */)a0;

@end
