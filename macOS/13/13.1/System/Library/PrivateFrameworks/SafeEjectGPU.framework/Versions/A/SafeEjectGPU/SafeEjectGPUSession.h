@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTLDeviceSPI;

@interface SafeEjectGPUSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<MTLDeviceSPI> _device;
    unsigned long long _gpuid;
    unsigned long long _registryID;
    NSString *_name;
    NSString *_enclosureName;
    NSString *_location;
    unsigned long long _enclosureRegistryID;
    unsigned long long _locationNumber;
    unsigned long long _maxTransferRate;
    BOOL _removable;
    BOOL _discrete;
    BOOL _integrated;
    NSMutableArray *_limboArray;
    NSObject<OS_dispatch_queue> *_limboQueue;
    BOOL _inLimbo;
    BOOL _exportDictionary;
}

+ (BOOL)relaunchPIDOnGPU:(int)a0 gpuids:(id)a1;
+ (BOOL)launchOnGPU:(id)a0 gpuids:(id)a1;
+ (BOOL)relaunchPID:(int)a0;

- (void)dealloc;
- (unsigned long long)finalize;
- (id)dictionary;
- (unsigned long long)status;
- (unsigned long long)cancel;
- (unsigned long long)_status;
- (id)apps;
- (unsigned long long)relaunch;
- (id)initWithDevice:(id)a0 andQueue:(id)a1;
- (void)getEnclosureInfo;
- (id)prettifiedDeviceName:(id)a0;
- (unsigned long long)initiate;
- (void)drainLimbo;
- (unsigned long long)_relaunch;
- (id)appsByPID;
- (float)getPercentUtilization;

@end
