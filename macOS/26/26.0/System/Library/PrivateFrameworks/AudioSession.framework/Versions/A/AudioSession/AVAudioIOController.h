@class NSArray, AVAudioSession, NSString;

@interface AVAudioIOController : NSObject <AVAudioIOController> {
    struct synchronized<std::weak_ptr<avas::client::IOController>, caulk::shared_ptr_mutex<avas::client::KVOMutex>, avas::client::unguarded_accessor<std::weak_ptr<avas::client::IOController>>> { struct shared_ptr_mutex<avas::client::KVOMutex> { struct shared_ptr<avas::client::KVOMutex> { struct KVOMutex *__ptr_; struct __shared_weak_count *__cntrl_; } mMutex; } mMutex; struct weak_ptr<avas::client::IOController> { struct IOController *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; } _guarded_impl;
}

@property (readonly, nonatomic) double sampleRate;
@property (readonly, weak, nonatomic) AVAudioSession *owningSession;
@property (readonly, nonatomic) NSArray *inputStreams;
@property (readonly, nonatomic) NSArray *outputStreams;
@property (readonly, nonatomic) struct AVAudioIOPeriod { double x0; double x1; unsigned long long x2; float x3; } IOPeriod;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) BOOL supportsDynamicLatency;
@property (readonly, nonatomic) struct AVAudioTimeInterval { double x0; double x1; unsigned long long x2; } dynamicLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImpl:(struct shared_ptr<avas::client::IOController> { struct IOController *x0; struct __shared_weak_count *x1; })a0;
- (struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })currentTime;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)setIOPeriod:(struct AVAudioIOPeriod { double x0; double x1; unsigned long long x2; float x3; })a0 error:(id *)a1;
- (long long)createIOEventBlock:(id /* block */)a0;
- (void)destroyIOEventBlock:(long long)a0;
- (struct AudioPresentationTimeStamp { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; double x7; double x8; })presentationTime;

@end
