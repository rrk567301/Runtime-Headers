@class NSString, _AFAudioPowerXPCSharedMemory;

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding> {
    _AFAudioPowerXPCSharedMemory *_sharedMemory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willBeginAccessPower;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)didEndAccessPower;
- (id)initWithXPCWrapper:(id)a0;

@end
