@class NSString;
@protocol FAFamilyCircleRequestConnectionProvider;

@interface FAFamilyCircleRequest : NSObject

@property (retain, nonatomic) id<FAFamilyCircleRequestConnectionProvider> connectionProvider;
@property (copy) NSString *usernameOrDSID;
@property (copy) NSString *passwordOrToken;

- (id)serviceConnection;
- (id)requestOptions;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConnectionProvider:(id)a0;
- (id)serviceRemoteObjectWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectWithErrorHandler:(id /* block */)a0;

@end
