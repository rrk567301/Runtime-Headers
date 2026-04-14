@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface DADAccessManager : DADisableableObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection;
@property (retain, nonatomic) NSMutableArray *clients;

+ (id)sharedManager;

- (id)_init;
- (void)removeClient:(id)a0;
- (id)stateString;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setupServerConnection;

@end
