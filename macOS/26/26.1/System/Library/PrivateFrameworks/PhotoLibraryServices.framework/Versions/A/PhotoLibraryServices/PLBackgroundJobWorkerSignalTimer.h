@class PLPhotoLibraryBundle, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLBackgroundJobWorkerSignalTimer : NSObject {
    NSObject<OS_dispatch_source> *_lock_timer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_date;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) PLPhotoLibraryBundle *bundle;
@property (nonatomic) unsigned long long workerType;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)start;
- (void)cancel;
- (void).cxx_destruct;
- (void)_inq_lock_timerEventHandler;
- (id)initWithQueue:(id)a0 bundle:(id)a1 workerType:(unsigned long long)a2 date:(id)a3 eventHandler:(id /* block */)a4;
- (BOOL)shouldCancelAndRescheduleWithDate:(id)a0;

@end
