@class ULEnvironment, ULLogicAdapter, NSMutableSet, ULServer, NSObject;
@protocol OS_dispatch_queue;

@interface ULLifeCycleManager : NSObject {
    struct unique_ptr<ULDatabase, std::default_delete<ULDatabase>> { struct ULDatabase *__ptr_; } db;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *signals;
@property (retain, nonatomic) ULEnvironment *environment;
@property (retain, nonatomic) ULLogicAdapter *logicAdapter;
@property (retain, nonatomic) ULServer *server;

- (void)_start;
- (void)start;
- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (void)_exitWithDate:(id)a0;
- (void)_spinUpListeners;
- (void)_spinUpModulesConstructorsAndDependencies;
- (void)_spinUpSignals;
- (void)_spinUpWakeUpNotifications;

@end
