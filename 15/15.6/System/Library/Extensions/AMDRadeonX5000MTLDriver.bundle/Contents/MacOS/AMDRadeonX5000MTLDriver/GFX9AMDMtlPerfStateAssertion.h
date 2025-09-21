@class GFX9AMD_MtlDevice, NSString;

@interface GFX9AMDMtlPerfStateAssertion : NSObject <MTLPerformanceStateAssertion> {
    struct AMDMtlPerfStateAssertionMembersRec { long long currPerfState; } _amd;
}

@property (nonatomic) char wasPerformanceStateAssertionMaintained;
@property (readonly) GFX9AMD_MtlDevice *device;
@property (readonly) long long requestedPerformanceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initInternalWithDevice:(id)a0 withState:(long long)a1;

@end
