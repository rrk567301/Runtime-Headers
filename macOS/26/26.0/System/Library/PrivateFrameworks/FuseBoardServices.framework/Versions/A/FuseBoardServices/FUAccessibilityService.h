@class BSServiceConnection;

@interface FUAccessibilityService : NSObject <FUAccessibilityServiceServerToClientInterface> {
    BSServiceConnection *_connection;
}

+ (id)identifier;
+ (id)interface;

- (id)_target;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)enableApplicationAccessibilityWithCompletion:(id /* block */)a0;

@end
