@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface DADAccessManager : DADisableableObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection;
@property (retain, nonatomic) NSMutableArray *clients;

+ (id)sharedManager;

- (id)_init;
- (void)removeClient:(id)a0;
- (void)dealloc;
- (id)stateString;
- (id)init;
- (void).cxx_destruct;
- (void)_setupServerConnection;

@end
