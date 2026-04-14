@class NSUUID, NSString, NSObject, PRProximityDeviceParameters;
@protocol OS_os_log;

@interface PRProximityDevice : NSObject <PRProximityDeviceProtocol> {
    NSObject<OS_os_log> *_logger;
    NSString *_model;
    PRProximityDeviceParameters *_proximityParameters;
    struct deque<BtProxData, std::allocator<BtProxData>> { struct __split_buffer<BtProxData *, std::allocator<BtProxData *>> { struct BtProxData **__first_; struct BtProxData **__begin_; struct BtProxData **__end_; struct { struct BtProxData **__cap_; } ; } __map_; unsigned long long __start_; struct { unsigned long long __size_; } ; } _samples;
    long long _proximity;
}

@property (readonly) NSUUID *peer;

- (id)init;
- (void)addSample:(struct BtProxData { double x0; double x1; unsigned int x2; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)deviceProximity;
- (void)estimateProximity;
- (id)initWithPeer:(id)a0 andPeerModel:(id)a1 withError:(id *)a2;
- (BOOL)proxReady;

@end
