@class BSServiceConnection;

@interface FUAccessibilityService : NSObject <FUAccessibilityServiceServerToClientInterface> {
    BSServiceConnection *_connection;
}

+ (id)identifier;
+ (id)interface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_target;
- (void)invalidate;
- (void)enableApplicationAccessibilityWithCompletion:(id /* block */)a0;

@end
