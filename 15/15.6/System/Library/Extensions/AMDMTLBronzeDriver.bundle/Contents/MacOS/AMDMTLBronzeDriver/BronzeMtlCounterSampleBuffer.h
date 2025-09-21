@class NSString, BronzeMtlCounterSet, MTLIOAccelResource;
@protocol MTLDevice;

@interface BronzeMtlCounterSampleBuffer : NSObject <MTLCounterSampleBuffer> {
    struct BronzeCounterSampleBufferMembersRec { MTLIOAccelResource *buffer; BronzeMtlCounterSet *counterSet; struct { unsigned char isTimestamp : 1; unsigned char isStageUtil : 1; unsigned char isStatistic : 1; unsigned int reserved : 29; } ; } m_members;
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
