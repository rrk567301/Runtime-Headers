@interface GFX9_MtlCmdBuffer : GFX9AMD_MtlCmdBuffer {
    struct GFX_CmdBufferMembersRec { struct GFX9_RsrcMgrRec *rsrcMgr; } _gfx9;
}

- (void)dealloc;
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
