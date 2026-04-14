@class IRXPCServicesManager;

@interface IRDaemon : NSObject {
    IRXPCServicesManager *_xpcManager;
}

- (void)run;
- (id)init;
- (void).cxx_destruct;
- (void)_startServices;

@end
