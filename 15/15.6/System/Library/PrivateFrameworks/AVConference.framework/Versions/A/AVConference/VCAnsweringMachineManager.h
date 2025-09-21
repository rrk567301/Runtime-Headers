@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCAnsweringMachineManager : VCXPCManager <VCAnsweringMachineDelegate> {
    NSMutableArray *_instances;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerAnsweringMachineInitialize;
+ (void)registerAnsweringMachineStart;
+ (void)registerAnsweringMachineStop;
+ (void)registerAnsweringMachineTerminate;
+ (void)registerBlocksForService;

- (void)dealloc;
- (id)init;
- (void)answeringMachine:(id)a0 didFinishAnnouncement:(char)a1 error:(id)a2;
- (void)answeringMachine:(id)a0 didStart:(char)a1 error:(id)a2;
- (void)answeringMachine:(id)a0 didStop:(char)a1 recordingURL:(id)a2 error:(id)a3;

@end
