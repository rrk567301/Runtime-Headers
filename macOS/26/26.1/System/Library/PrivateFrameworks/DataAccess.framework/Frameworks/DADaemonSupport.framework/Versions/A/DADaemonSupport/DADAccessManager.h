@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface DADAccessManager : DADisableableObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection;
@property (retain, nonatomic) NSMutableArray *clients;

+ (id)sharedManager;

- (void)removeClient:(id)a0;
- (id)stateString;
- (id)_init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_setupServerConnection;

@end
