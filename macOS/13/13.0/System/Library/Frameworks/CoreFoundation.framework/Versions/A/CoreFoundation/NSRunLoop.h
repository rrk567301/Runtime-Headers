@class NSString;

@interface NSRunLoop : NSObject {
    id _rl;
    id _dperf;
    id _perft;
    id _info;
    id _ports;
}

@property (class, readonly) NSRunLoop *currentRunLoop;
@property (class, readonly) NSRunLoop *mainRunLoop;

@property (readonly, copy) NSString *currentMode;

+ (id)currentRunLoop;
+ (id)mainRunLoop;
+ (id)_new:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)run;
- (void)performBlock:(id /* block */)a0;
- (void)addTimer:(id)a0 forMode:(id)a1;
- (void)runLoopScheduledWithAction:(id)a0;
- (void)_portInvalidated:(id)a0;
- (void)_enumerateInfoPairsWithBlock:(id /* block */)a0;
- (BOOL)_containsPort:(id)a0 forMode:(id)a1;
- (void)_addPort:(id)a0 forMode:(id)a1;
- (void)_removePort:(id)a0 forMode:(id)a1;
- (void)addPort:(id)a0 forMode:(id)a1;
- (void)removePort:(id)a0 forMode:(id)a1;
- (BOOL)containsPort:(id)a0 forMode:(id)a1;
- (id)portsForMode:(id)a0;
- (void)removeTimer:(id)a0 forMode:(id)a1;
- (id)timersForMode:(id)a0;
- (BOOL)containsTimer:(id)a0 forMode:(id)a1;
- (id)allModes;
- (void)_invalidateTimers;
- (id)limitDateForMode:(id)a0;
- (void)_wakeup;
- (void)acceptInputForMode:(id)a0 beforeDate:(id)a1;
- (BOOL)runMode:(id)a0 beforeDate:(id)a1;
- (BOOL)runMode:(id)a0 untilDate:(id)a1;
- (void)runUntilDate:(id)a0;
- (BOOL)runBeforeDate:(id)a0;
- (void)configureAsServer;
- (void)performInModes:(id)a0 block:(id /* block */)a1;
- (void)performSelector:(SEL)a0 target:(id)a1 argument:(id)a2 order:(unsigned long long)a3 modes:(id)a4;
- (void)cancelPerformSelector:(SEL)a0 target:(id)a1 argument:(id)a2;
- (void)cancelPerformSelectorsWithTarget:(id)a0;
- (id)_initWithRl:(id)a0 dperf:(id)a1 perft:(id)a2 info:(id)a3 ports:(id)a4;
- (struct __CFRunLoop { } *)getCFRunLoop;
- (id)_dperf;
- (id)_perft;
- (id)_info;
- (id)_ports;
- (void)_deallocHelper;
- (id)currentMode;

@end
