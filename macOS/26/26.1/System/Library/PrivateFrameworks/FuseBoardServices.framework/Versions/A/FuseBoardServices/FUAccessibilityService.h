@class BSServiceConnection;

@interface FUAccessibilityService : NSObject <FUAccessibilityServiceServerToClientInterface> {
    BSServiceConnection *_connection;
}

+ (id)interface;
+ (id)identifier;

- (id)_target;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)enableApplicationAccessibilityWithCompletion:(id /* block */)a0;

@end
