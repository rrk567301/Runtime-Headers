@class MDSMachSubsystem;

@interface MDSMachPortObject : MDSObject {
    MDSMachSubsystem *_machSubsystem;
}

+ (int)dispatchMachMsgOptions;
+ (void)setDispatchMachMsgOptions:(int)a0;
+ (unsigned int)maxMachMsgSize;
+ (void)setMaxMachMsgSize:(unsigned int)a0;

- (void)dealloc;
- (unsigned int)machPort;
- (id)connection;
- (void)setMachPort:(unsigned int)a0;
- (void)invalidateRunLoopSources;
- (void)addMachDispatchLinks;
- (unsigned long long)portRights;
- (void)setupMachSubsystem;

@end
