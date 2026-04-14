@interface OrchestratorClientIOLapseHandler : NSObject {
    unsigned int mDeviceID;
    struct unique_ptr<IOLapseHandler, std::default_delete<IOLapseHandler>> { struct __compressed_pair<IOLapseHandler *, std::default_delete<IOLapseHandler>> { struct IOLapseHandler *__value_; } __ptr_; } mLapseHandler;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)installClientLapseHandler:(void /* function */ *)a0 data:(void *)a1;
- (int)createHALLapseEventListeners:(unsigned int)a0;
- (int)destroyHALLapseEventListeners;
- (void)ioHasStartedOnDevice:(BOOL)a0;

@end
