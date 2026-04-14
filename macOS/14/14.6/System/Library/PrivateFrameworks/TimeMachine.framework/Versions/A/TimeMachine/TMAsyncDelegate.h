@class DMManager;

@interface TMAsyncDelegate : NSObject <DMAsyncDelegate> {
    DMManager *_manager;
}

@property (copy) id /* block */ startBlock;
@property (copy) id /* block */ progressBlock;
@property (copy) id /* block */ messageBlock;
@property (copy) id /* block */ errorBlock;
@property (copy) id /* block */ finishBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (void)dmAsyncFinishedForDisk:(struct __DADisk { } *)a0 mainError:(int)a1 detailError:(int)a2 dictionary:(id)a3;
- (void)dmAsyncMessageForDisk:(struct __DADisk { } *)a0 string:(id)a1 dictionary:(id)a2;
- (void)dmAsyncProgressForDisk:(struct __DADisk { } *)a0 barberPole:(BOOL)a1 percent:(float)a2;
- (void)dmAsyncStartedForDisk:(struct __DADisk { } *)a0;

@end
