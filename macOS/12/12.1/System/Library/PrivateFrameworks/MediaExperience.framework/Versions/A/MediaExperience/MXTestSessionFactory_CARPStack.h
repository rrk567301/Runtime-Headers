@interface MXTestSessionFactory_CARPStack : NSObject {
    struct OpaqueFigSemaphore { } *mSemaphore;
}

- (void)dealloc;
- (id)init;
- (int)activate:(id)a0;
- (int)deactivate:(id)a0;
- (void)setup:(struct __CFString { } *)a0 cmsLoggingLevel:(struct __CFString { } *)a1 volumeLoggingLevel:(struct __CFString { } *)a2;
- (void)teardown:(int)a0 testName:(struct __CFString { } *)a1;
- (void)createSemaphore;
- (int)signalSemaphore;
- (int)waitOnSemaphore;

@end
