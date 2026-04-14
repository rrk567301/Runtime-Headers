@class BSServiceConnection;

@interface FUAccessibilityService : NSObject <FUAccessibilityServiceServerToClientInterface> {
    BSServiceConnection *_connection;
}

+ (id)interface;
+ (id)identifier;

- (void)invalidate;
- (id)_target;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enableApplicationAccessibilityWithCompletion:(id /* block */)a0;

@end
