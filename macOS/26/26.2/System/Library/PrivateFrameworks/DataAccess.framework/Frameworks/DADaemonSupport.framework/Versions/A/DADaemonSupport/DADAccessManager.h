@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface DADAccessManager : DADisableableObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection;
@property (retain, nonatomic) NSMutableArray *clients;

+ (id)sharedManager;

- (void)removeClient:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)stateString;
- (id)init;
- (void)dealloc;
- (void)_setupServerConnection;

@end
