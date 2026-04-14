@interface OrchestratorClientIOLapseHandler : NSObject {
    unsigned int mDeviceID;
    struct unique_ptr<IOLapseHandler, std::default_delete<IOLapseHandler>> { struct IOLapseHandler *__ptr_; } mLapseHandler;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)installClientLapseHandler:(void /* function */ *)a0 data:(void *)a1;
- (int)createHALLapseEventListeners:(unsigned int)a0;
- (int)destroyHALLapseEventListeners;
- (void)ioHasStartedOnDevice:(BOOL)a0;

@end
