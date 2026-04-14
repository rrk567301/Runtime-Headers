@class NSObject;
@protocol OS_dispatch_queue;

@interface ASDTIPCAudioUCDeviceClient : ASDTIPCAudioDeviceClient {
    struct unique_ptr<ASDT::IPCUCAudioDevice, std::default_delete<ASDT::IPCUCAudioDevice>> { struct __compressed_pair<ASDT::IPCUCAudioDevice *, std::default_delete<ASDT::IPCUCAudioDevice>> { struct IPCUCAudioDevice *__value_; } __ptr_; } _ucDevice;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)clientForIPCAudioDevice:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)setPowerState:(unsigned int)a0;
- (BOOL)getPowerState:(unsigned int *)a0;
- (id)getProperty:(unsigned int)a0 withDataSize:(unsigned long long)a1;
- (id)initWithIPCAudioDevice:(unsigned int)a0;
- (BOOL)setProperty:(unsigned int)a0 withData:(id)a1;

@end
