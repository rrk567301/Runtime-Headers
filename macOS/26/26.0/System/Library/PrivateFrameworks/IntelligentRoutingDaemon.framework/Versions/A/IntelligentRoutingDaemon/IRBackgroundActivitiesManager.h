@class NSObject, IRSessionServer, BGSystemTaskScheduler;
@protocol OS_dispatch_queue;

@interface IRBackgroundActivitiesManager : NSObject

@property (weak, nonatomic) IRSessionServer *server;
@property (retain, nonatomic) BGSystemTaskScheduler *scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithServer:(id)a0;
- (void).cxx_destruct;
- (void)registerForRepeatingBackgroundXPCActivityWithIdentifier:(id)a0 interval:(long long)a1 isDiskIntensive:(BOOL)a2 isMemoryIntensive:(BOOL)a3 handler:(id /* block */)a4;

@end
