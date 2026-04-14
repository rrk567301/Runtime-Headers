@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject {
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}

- (id)logHandle;
- (id)initWithName:(const char *)a0 queue:(id)a1;
- (id)executeSyncWithResult:(id /* block */)a0;
- (BOOL)executeSyncWithBOOL:(id /* block */)a0;
- (void)executeSync:(id /* block */)a0;
- (void)execute:(id /* block */)a0;
- (id)queue;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0;

@end
