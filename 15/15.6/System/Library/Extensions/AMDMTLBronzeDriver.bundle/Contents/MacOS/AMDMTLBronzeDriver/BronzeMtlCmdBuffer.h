@class BronzeMtlRenderCmdEncoder, NSString, NSError, MTLResourceList, NSMutableDictionary, NSDictionary, MTLIOAccelResource, BronzeMtlBlitCmdEncoder, BronzeMtlComputeCmdEncoder;
@protocol MTLDeadlineProfile, MTLDevice, MTLLogContainer, MTLCommandEncoder, MTLBuffer, MTLCommandQueue;

@interface BronzeMtlCmdBuffer : MTLIOAccelCommandBuffer <MTLCommandBufferSPI, AmdPrivateCommandBuffer> {
    struct BronzeCmdBufInfoRec { struct MTLIOAccelCommandBufferStorage *storage; struct MTLIOAccelCommandBufferResourceInfo *cmdRsrcInfo; struct IOAccelResourceList *rsrcList; MTLResourceList *apiRsrcList; MTLResourceList *internalRsrcList; void /* function */ *preSplitSegmentCallback; void /* function */ *postSplitSegmentCallback; void *callbackHandle; unsigned int *segmentStartHwPtr; struct BronzeResourceBindInfoRec *currRsrc; unsigned int minCmdBufDwords; unsigned int reservedDwords; unsigned int numCurrRsrc; unsigned int condBranchDwords; struct vector<AMDMtlCmdBufBasicBlock, std::allocator<AMDMtlCmdBufBasicBlock>> { struct AMDMtlCmdBufBasicBlock *__begin_; struct AMDMtlCmdBufBasicBlock *__end_; struct __compressed_pair<AMDMtlCmdBufBasicBlock *, std::allocator<AMDMtlCmdBufBasicBlock>> { struct AMDMtlCmdBufBasicBlock *__value_; } __end_cap_; } basicBlocks; struct vector<AMDMtlCmdBufCfgNode, std::allocator<AMDMtlCmdBufCfgNode>> { struct AMDMtlCmdBufCfgNode *__begin_; struct AMDMtlCmdBufCfgNode *__end_; struct __compressed_pair<AMDMtlCmdBufCfgNode *, std::allocator<AMDMtlCmdBufCfgNode>> { struct AMDMtlCmdBufCfgNode *__value_; } __end_cap_; } cfgNodes; void *indirectRsrc; int submitChannel; BronzeMtlCmdBuffer *mtlCmdBuf; unsigned char viBasedHw : 1; unsigned char ciViBasedHw : 1; unsigned int reserved : 30; unsigned int totalRsrcGroupCount; unsigned int rsrcGroupsRemoved; unsigned int ubmNumCmdDwordsPre; unsigned int ubmNumCmdDwordsPost; unsigned int ubmCmdDwordsPre[32]; unsigned int ubmCmdDwordsPost[32]; id<MTLDevice> device; } cmdBufInfo;
    struct BronzeCmdBufferMembersRec { union { id<MTLCommandEncoder> mtlEncoder; BronzeMtlRenderCmdEncoder *renderEncoder; BronzeMtlComputeCmdEncoder *computeEncoder; BronzeMtlBlitCmdEncoder *blitEncoder; } ; struct BronzeMtlStatistics *statsMgr; unsigned int cmdBufIndex; unsigned int encoderIndex; unsigned int cmdCount; unsigned int presentEncoded; struct AMD_MtlThreadTrace *pThreadTrace; BOOL computeOnGfxChannel; struct AMDBitVectorRec *knownExpandedVec; struct BronzeRsrcMgrRec *rsrcMgr; struct BronzeSurfSyncMgrRec *hSurfSyncMgr; MTLIOAccelResource *timestampQueryBuffer; struct AMDBitVectorRec *renderedToVec; unsigned long long stats[6]; struct vector<BronzeResourceBindInfoRec, std::allocator<BronzeResourceBindInfoRec>> { struct BronzeResourceBindInfoRec *__begin_; struct BronzeResourceBindInfoRec *__end_; struct __compressed_pair<BronzeResourceBindInfoRec *, std::allocator<BronzeResourceBindInfoRec>> { struct BronzeResourceBindInfoRec *__value_; } __end_cap_; } indirectRsrcVec; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } encoderUpdateFence; unsigned int fenceChannelBitmap; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } encoderWaitFence; unsigned int segmentOffsets[9]; unsigned int currISAILHashTokensToSend; BronzeMtlCmdBuffer *parentCmdBuffer; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; Class lastEncoderClass; void *apiLayerData; unsigned int *computePartialFlushSkipPtr; struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } globalRsrcListOffsets; unsigned long long rsrcIndirectTableGpuAddr; void *rsrcIndirectTableCpuPtr; MTLIOAccelResource *rsrcIndirectTableRsrc; } m_members;
}

@property (readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (getter=isProfilingEnabled) char profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long globalTraceObjectID;
@property id<MTLBuffer> privateData;
@property unsigned long long privateDataOffset;
@property id<MTLBuffer> privateLoggingBuffer;
@property (nonatomic) char sharedIndirectionTable;
@property (readonly, retain) id<MTLDeadlineProfile> deadlineProfile;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) char retainedReferences;
@property (readonly) unsigned long long errorOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLLogContainer> logs;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)blitCommandEncoder;
- (void)commit;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)a0;
- (void)presentDrawable:(id)a0;
- (void)presentDrawable:(id)a0 atTime:(double)a1;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)resourceStateCommandEncoder;
- (id)videoCommandEncoder;
- (id)initWithQueue:(id)a0 retainedReferences:(char)a1;
- (id)initWithQueue:(id)a0 retainedReferences:(char)a1 synchronousDebugMode:(char)a2;
- (void)postProcessSamples:(struct MTLStatSampleRec { void *x0; unsigned long long x1; unsigned long long x2[0]; } *)a0 toUserDst:(unsigned long long *)a1 numSamples:(unsigned long long)a2;
- (void)setCurrentCommandEncoder:(id)a0;
- (void)setQueryBuffer:(id)a0;

@end
