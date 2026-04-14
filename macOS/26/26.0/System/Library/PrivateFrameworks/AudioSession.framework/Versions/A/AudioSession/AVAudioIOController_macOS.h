@class NSString, AVAudioSession;

@interface AVAudioIOController_macOS : NSObject <AVAudioIOController> {
    AVAudioSession *_owningSession;
    struct unique_ptr<avas::client::IOControllerImpl, std::default_delete<avas::client::IOControllerImpl>> { struct IOControllerImpl *__ptr_; } _impl;
    struct unique_ptr<avas::client::AggregateDeviceFactory, std::default_delete<avas::client::AggregateDeviceFactory>> { struct AggregateDeviceFactory *__ptr_; } _aggregateDeviceFactory;
}

@property (readonly, nonatomic) struct AVAudioIOPeriod { double x0; double x1; unsigned long long x2; float x3; } IOPeriod;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) BOOL supportsDynamicLatency;
@property (readonly, nonatomic) struct AVAudioTimeInterval { double x0; double x1; unsigned long long x2; } dynamicLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSessionActive;
- (struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })currentTime;
- (id)outputStreams;
- (id).cxx_construct;
- (id)inputStreams;
- (void).cxx_destruct;
- (id)createIOClientWithIOBlock:(id /* block */)a0 direction:(unsigned int)a1;
- (BOOL)createIOStateChangeBlock:(id /* block */)a0;
- (BOOL)isInputMuted;
- (BOOL)privateStartIO:(struct shared_ptr<avas::client::IOClientImpl> { struct IOClientImpl *x0; struct __shared_weak_count *x1; })a0;
- (id)createIOClientWithIOBlock:(id /* block */)a0;
- (long long)createIOEventBlock:(id /* block */)a0;
- (void)destroyIOEventBlock:(long long)a0;
- (BOOL)implicitlyActivateSession;
- (id)initWithSession:(id)a0 buildDescription:(id)a1 isDecoupledInput:(BOOL)a2;
- (unsigned int)inputStreamsCount;
- (BOOL)isOutputMuted;
- (unsigned int)outputStreamsCount;
- (struct AudioPresentationTimeStamp { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; double x7; double x8; })presentationTime;
- (void)privateDispatchIOControllerEvent:(unsigned long long)a0;
- (BOOL)privateStopIO:(struct shared_ptr<avas::client::IOClientImpl> { struct IOClientImpl *x0; struct __shared_weak_count *x1; })a0;
- (void)processIOStateChangeEvents:(id)a0 decoupled:(BOOL)a1;

@end
