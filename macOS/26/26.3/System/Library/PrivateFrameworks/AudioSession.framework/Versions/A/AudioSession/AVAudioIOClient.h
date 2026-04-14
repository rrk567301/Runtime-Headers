@class AVAudioIOController;

@interface AVAudioIOClient : NSObject {
    AVAudioIOController *_ioController;
    struct shared_ptr<avas::client::IOClientImpl> { struct IOClientImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
}

@property (readonly, weak, nonatomic) AVAudioIOController *IOController;
@property (readonly, nonatomic) BOOL outputEnabled;
@property (readonly, nonatomic) BOOL inputEnabled;
@property (copy, nonatomic) id /* block */ IOEventBlock;

- (void)stop;
- (BOOL)isSessionActive;
- (BOOL)startAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)startAsyncAndReturnError:(id *)a0 completionHandler:(id /* block */)a1;
- (BOOL)implicitlyActivateSession;
- (id)initWithIOController:(id)a0 impl:(struct shared_ptr<avas::client::IOClientImpl> { struct IOClientImpl *x0; struct __shared_weak_count *x1; })a1;
- (struct shared_ptr<avas::client::IOClientImpl> { struct IOClientImpl *x0; struct __shared_weak_count *x1; })ioClientImpl;
- (BOOL)startWithoutWaitingAndReturnError:(id *)a0;

@end
