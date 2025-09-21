@interface GFX10_MtlCmdBuffer : GFXAAMD_MtlCmdBuffer {
    struct GFX10_CmdBufferMembersRec { struct GFX10_RsrcMgrRec *rsrcMgr; } _gfx10;
}

- (void)dealloc;
- (id)accelerationStructureCommandEncoder;
- (id)accelerationStructureCommandEncoderWithDescriptor:(id)a0;
- (id)blitCommandEncoder;
- (void)commit;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)a0;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)initWithQueue:(id)a0 retainedReferences:(char)a1;
- (id)initWithQueue:(id)a0 retainedReferences:(char)a1 synchronousDebugMode:(char)a2;
- (void)amdMtl_HWL_AllocateTopOfPipeWait;
- (void)amdMtl_HWL_WriteBottomOfPipeFlush;
- (void)amdMtl_HWL_WriteTopOfPipeWait;

@end
