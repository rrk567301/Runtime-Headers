@class AVAudioIOController;

@interface AVAudioIOClient : NSObject {
    AVAudioIOController *_ioController;
}

@property (nonatomic) struct shared_ptr<as::client::IOClient> { struct IOClient *__ptr_; struct __shared_weak_count *__cntrl_; } impl;
@property (readonly, weak, nonatomic) AVAudioIOController *IOController;
@property (readonly, nonatomic) char outputEnabled;
@property (readonly, nonatomic) char inputEnabled;
@property (copy, nonatomic) id /* block */ IOEventBlock;

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)startAndReturnError:(id *)a0;
- (void)stop;
- (char)startAsyncAndReturnError:(id *)a0 completionHandler:(id /* block */)a1;
- (id)initWithIOController:(id)a0 impl:(struct shared_ptr<as::client::IOClient> { struct IOClient *x0; struct __shared_weak_count *x1; })a1;
- (char)startWithoutWaitingAndReturnError:(id *)a0;

@end
