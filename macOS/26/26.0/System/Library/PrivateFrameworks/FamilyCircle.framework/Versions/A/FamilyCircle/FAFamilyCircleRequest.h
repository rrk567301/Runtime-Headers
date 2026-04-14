@class NSString;
@protocol FAFamilyCircleRequestConnectionProvider;

@interface FAFamilyCircleRequest : NSObject

@property (retain, nonatomic) id<FAFamilyCircleRequestConnectionProvider> connectionProvider;
@property (copy) NSString *usernameOrDSID;
@property (copy) NSString *passwordOrToken;

- (id)init;
- (id)requestOptions;
- (id)serviceConnection;
- (id)initWithConnectionProvider:(id)a0;
- (void).cxx_destruct;
- (id)serviceRemoteObjectWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectWithErrorHandler:(id /* block */)a0;

@end
