@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface EDThreadMigratorManager : NSObject <EFLoggable, EDThreadMigratorObserver> {
    NSMutableDictionary *_threadMigrators;
    NSMutableDictionary *_queryHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_removeThreadMigratorWithThreadScope:(id)a0;
- (void)addThreadMigrator:(id)a0 inMemoryThreadQueryHandler:(id)a1 withThreadScope:(id)a2;
- (id)findThreadMigratorWithThreadScope:(id)a0 inMemoryThreadQueryHandler:(id *)a1;
- (void)threadMigratorDidComplete:(id)a0;
- (void)threadMigratorDidFail:(id)a0;

@end
