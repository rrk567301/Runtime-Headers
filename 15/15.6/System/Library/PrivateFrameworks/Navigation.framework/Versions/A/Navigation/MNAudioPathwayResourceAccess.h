@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MNAudioPathwayResourceAccess : NSObject {
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSDictionary *_hfpRoute;
    unsigned long long _forLoggingOnly_pickableRoutesCount;
}

@property (nonatomic) char enableHFPUse;
@property (nonatomic) char wantsVolumeControl;

- (void).cxx_destruct;
- (id)initWithHFPEnabled:(char)a0;

@end
