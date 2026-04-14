@class NSString;

@interface AMSMediaTokenServiceUserDefaultsStore : NSObject

@property (readonly) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;
- (id)retrieveToken;
- (BOOL)storeToken:(id)a0;

@end
