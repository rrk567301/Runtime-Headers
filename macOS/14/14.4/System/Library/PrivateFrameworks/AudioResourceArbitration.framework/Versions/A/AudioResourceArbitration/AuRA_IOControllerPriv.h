@class NSString;

@interface AuRA_IOControllerPriv : AuRA_ObjectPriv <AuRA_IOController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct shared_ptr<caulk::reactor<aura::itf::IOController *>> { void *x0; struct __shared_weak_count *x1; })reactor;
- (BOOL)isRunning;
- (double)sampleRate;
- (BOOL)stop:(id *)a0;
- (BOOL)start:(id *)a0;
- (unsigned int)bufferFrameSize;
- (BOOL)clearIOEventNotifier:(id)a0 error:(id *)a1;
- (id)initWithIOController:(struct weak_ptr<aura::IOController> { struct IOController *x0; struct __shared_weak_count *x1; })a0;
- (unsigned char)ioControllerType;
- (id)setIOEventNotifier:(id /* block */)a0 error:(id *)a1;

@end
