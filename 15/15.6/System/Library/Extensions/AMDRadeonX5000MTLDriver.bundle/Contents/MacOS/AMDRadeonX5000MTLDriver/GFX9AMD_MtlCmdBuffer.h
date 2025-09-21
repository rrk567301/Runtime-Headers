@class NSError, NSString, __end_, __end_cap_, NSMutableDictionary, NSDictionary, MTLIOAccelResource, MTLResourceList;
@protocol MTLCommandQueue, MTLDeadlineProfile, MTLBuffer, MTLTexture, MTLDevice, MTLLogContainer, MTLRasterizationRateMap, MTLCommandEncoder;

@interface GFX9AMD_MtlCmdBuffer : MTLIOAccelCommandBuffer <MTLCommandBufferSPI, AmdPrivateCommandBuffer, AmdSPMPrivateCommandBuffer> {
    struct CmdBufferMembersRec { struct AMD_HwCmdBufInfoRec { struct MTLIOAccelCommandBufferStorage *storage; struct MTLIOAccelCommandBufferResourceInfo *cmdRsrcInfo; struct IOAccelResourceList *rsrcList; MTLResourceList *apiRsrcList; MTLResourceList *internalRsrcList; void /* function */ *preSplitSegmentCallback; void /* function */ *postSplitSegmentCallback; void *callbackHandle; unsigned int *segmentStartHwPtr; struct AMD_ResourceBindInfoRec *currRsrc; unsigned int minHwCmdBufDwords; unsigned int reservedDwords; unsigned int numCurrRsrc; struct vector<AMD_ResourceBindInfoRec, std::allocator<AMD_ResourceBindInfoRec>> { struct AMD_ResourceBindInfoRec *__begin_; struct AMD_ResourceBindInfoRec *__end_; struct __compressed_pair<AMD_ResourceBindInfoRec *, std::allocator<AMD_ResourceBindInfoRec>> { struct AMD_ResourceBindInfoRec *__value_; } __end_cap_; } indirectRsrc; struct vector<AMDMtlCmdBufBasicBlock, std::allocator<AMDMtlCmdBufBasicBlock>> { struct AMDMtlCmdBufBasicBlock *__begin_; struct AMDMtlCmdBufBasicBlock *__end_; struct __compressed_pair<AMDMtlCmdBufBasicBlock *, std::allocator<AMDMtlCmdBufBasicBlock>> { struct AMDMtlCmdBufBasicBlock *__value_; } __end_cap_; } basicBlocks; struct vector<AMDMtlCmdBufCfgNode, std::allocator<AMDMtlCmdBufCfgNode>> { struct AMDMtlCmdBufCfgNode *__begin_; struct AMDMtlCmdBufCfgNode *__end_; struct __compressed_pair<AMDMtlCmdBufCfgNode *, std::allocator<AMDMtlCmdBufCfgNode>> { struct AMDMtlCmdBufCfgNode *__value_; } __end_cap_; } cfgNodes; unsigned int condBranchDwords; unsigned int indirectRsrcSize; int submitChannel; BOOL lastRsrcListFull; GFX9AMD_MtlCmdBuffer *cmdBuffer; unsigned int currPeerIndex; BOOL isPeerLocked; BOOL enableWriteForXgmi; unsigned char tempBufCmdBufRsrcIndex; struct { unsigned char needCachedRsrc : 1; unsigned int unused : 31; } flags; unsigned int totalRsrcGroupCount; unsigned int rsrcGroupsRemoved; unsigned int ubmNumCmdDwordsPre; unsigned int ubmNumCmdDwordsPost; unsigned int ubmCmdDwordsPre[32]; unsigned int ubmCmdDwordsPost[32]; MTLIOAccelResource *tempBuf; BOOL isErrorCbj; } hwCmdBufInfo; id<MTLCommandEncoder> mtlEncoder; struct GFX9AMD_MtlStatistics *statsMgr; struct AMDBitVectorRec *knownExpandedVec; struct AMDBitVectorRec *renderedToVec; struct AMDBitVectorRec *readFromVec; MTLIOAccelResource *timestampQueryBuffer; void *apiLayerData; unsigned int cmdBufIndex; unsigned int encoderIndex; unsigned int cmdCount; Class lastEncoderClass; struct AMD_MtlThreadTrace *pThreadTrace; struct AMD_MtlSPMTrace *pSpmTrace; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } encoderUpdateFence; unsigned int fenceChannelBitmap; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } encoderWaitFence; unsigned int segmentOffsets[9]; unsigned int prevComputeSegmentOffset; GFX9AMD_MtlCmdBuffer *parentCmdBuffer; struct vector<const GFX9AMD_MtlTexture *, std::allocator<const GFX9AMD_MtlTexture *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<const GFX9AMD_MtlTexture **, std::allocator<const GFX9AMD_MtlTexture *>> { id *__value_; } x1; } finalizeRsrcList; struct map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { struct __tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } fenceIdToEncoderId; struct map<unsigned long long, unsigned int, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned int>>> { struct __tree<std::__value_type<unsigned long long, unsigned int>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, unsigned int>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, unsigned int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, unsigned int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, unsigned int>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } eventHashToEncoderId; struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } waitEvent; unsigned long long encoderIdGpuAddr; unsigned int currEncoderCount; unsigned int currISAILHashTokensToSend; unsigned int *flushSkipPtrs[2]; unsigned int *waitRegSkipPtr; unsigned int noopDword; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; id<MTLRasterizationRateMap> lastRateMap; struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } globalRsrcListOffsets; unsigned long long rsrcIndirectTableGpuAddr; void *rsrcIndirectTableCpuPtr; MTLIOAccelResource *rsrcIndirectTableRsrc; id<MTLTexture> depthTexture; float depthFastClearValue; unsigned char preSurfSyncRequired : 1; unsigned char postSurfSyncRequired : 1; unsigned char presentEncoded : 1; unsigned char signalEvent : 1; unsigned char depthFastCleared : 1; unsigned char rtDebug : 1; unsigned char computeOnGfxChannel : 1; unsigned int reserved : 25; } m_members;
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
- (void)resetSPMSample:(id)a0;
- (void)amdMtl_HWL_AllocateTopOfPipeWait;
- (void)amdMtl_HWL_WriteBottomOfPipeFlush;
- (void)amdMtl_HWL_WriteTopOfPipeWait;
- (void)pageOffSPMSample;
- (BOOL)startSPMSample;
- (BOOL)stopSPMSample;

@end
