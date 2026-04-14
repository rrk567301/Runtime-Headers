@class NSString;
@protocol FAFamilyCircleRequestConnectionProvider;

@interface FAFamilyCircleRequest : NSObject

@property (retain, nonatomic) id<FAFamilyCircleRequestConnectionProvider> connectionProvider;
@property (copy) NSString *usernameOrDSID;
@property (copy) NSString *passwordOrToken;

- (id)init;
- (id)serviceConnection;
- (void).cxx_destruct;
- (id)initWithConnectionProvider:(id)a0;
- (id)requestOptions;
- (id)serviceRemoteObjectWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectWithErrorHandler:(id /* block */)a0;

@end
