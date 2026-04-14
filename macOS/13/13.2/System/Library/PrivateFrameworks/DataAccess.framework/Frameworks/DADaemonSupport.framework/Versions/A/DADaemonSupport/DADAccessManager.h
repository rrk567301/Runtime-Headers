@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface DADAccessManager : DADisableableObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection;
@property (retain, nonatomic) NSMutableArray *clients;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)removeClient:(id)a0;
- (id)stateString;
- (void)_setupServerConnection;

@end
