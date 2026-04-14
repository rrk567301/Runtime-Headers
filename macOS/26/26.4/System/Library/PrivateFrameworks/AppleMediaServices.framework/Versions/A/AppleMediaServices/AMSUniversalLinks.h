@class AMSUniversalLinksConnection;

@interface AMSUniversalLinks : NSObject

@property (retain) AMSUniversalLinksConnection *connection;

+ (id)_connection;
+ (void)update;
+ (id)_privateQueue;

- (void).cxx_destruct;
- (id)init;
- (id)updateUniversalLinks;

@end
