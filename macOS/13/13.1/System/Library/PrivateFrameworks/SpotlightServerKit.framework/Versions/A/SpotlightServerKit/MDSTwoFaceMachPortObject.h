@class MDSMachSubsystem, NSObject;
@protocol OS_dispatch_queue;

@interface MDSTwoFaceMachPortObject : MDSMachPortObject {
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    unsigned int _backgroundPort;
    MDSMachSubsystem *_backgroundSubsystem;
}

- (void)dealloc;
- (void)shutdown;
- (id)initWithDeferredShutdown:(BOOL)a0;
- (void)setupBackgroundMachSubsystem;
- (void)addBackgroundMachDispatchLinks;
- (unsigned long long)backgroundPortRights;
- (unsigned int)backgroundPort;
- (void)setBackgroundPort:(unsigned int)a0;

@end
