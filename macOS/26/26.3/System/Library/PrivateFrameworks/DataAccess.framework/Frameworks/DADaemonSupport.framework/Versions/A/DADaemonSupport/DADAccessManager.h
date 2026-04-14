@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface DADAccessManager : DADisableableObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection;
@property (retain, nonatomic) NSMutableArray *clients;

+ (id)sharedManager;

- (id)stateString;
- (void)removeClient:(id)a0;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupServerConnection;

@end
