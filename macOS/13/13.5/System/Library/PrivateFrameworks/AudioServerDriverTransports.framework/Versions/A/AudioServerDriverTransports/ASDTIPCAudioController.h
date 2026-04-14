@class NSSet, NSMutableDictionary, NSString, NSObject, ASDTIOServiceMatcher;
@protocol OS_dispatch_queue, ASDTIPCAudioDeviceAvailableDelegate;

@interface ASDTIPCAudioController : NSObject <ASDTIOServiceMatchDelegate>

@property (weak, nonatomic) id<ASDTIPCAudioDeviceAvailableDelegate> delegate;
@property (retain, nonatomic) NSSet *deviceIDs;
@property (retain, nonatomic) ASDTIOServiceMatcher *ioServiceMatcher;
@property (retain, nonatomic) NSMutableDictionary *audioDeviceClients;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerForDeviceIDs:(id)a0 withDelegate:(id)a1;
+ (id)deviceIDsRequiredByAudioDevices:(id)a0;
+ (id)ipcAudioObjectsForDevice:(id)a0;

@end
