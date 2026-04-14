@class IRXPCServicesManager;

@interface IRDaemon : NSObject {
    IRXPCServicesManager *_xpcManager;
}

- (void)run;
- (void).cxx_destruct;
- (id)init;
- (void)_startServices;

@end
