@class NSString, GFX9AMD_MtlCounterSet, MTLIOAccelResource;
@protocol MTLDevice;

@interface GFX9AMDMtlCounterSampleBuffer : NSObject <MTLCounterSampleBuffer> {
    struct AMDMtlCounterSampleBufferMembersRec { GFX9AMD_MtlCounterSet *counterSet; MTLIOAccelResource *buffer; } _amd;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) unsigned long long sampleCount;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)resolveCounterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initInternalWithDevice:(id)a0 withDescriptor:(id)a1;

@end
