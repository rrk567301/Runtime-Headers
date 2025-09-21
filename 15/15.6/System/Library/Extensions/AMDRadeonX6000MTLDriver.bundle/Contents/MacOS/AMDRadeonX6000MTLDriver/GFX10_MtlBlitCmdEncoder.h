@class NSString;
@protocol MTLDevice;

@interface GFX10_MtlBlitCmdEncoder : GFXAAMD_MtlBlitCmdEncoder <MTLBlitCommandEncoder, MTLCommandEncoderSPI> {
    struct GFX10_BlitCmdEncoderMembersRec { unsigned int unused; } _gfx10blit;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)optimizeIndirectCommandBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)resolveCounters:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationBuffer:(id)a2 destinationOffset:(unsigned long long)a3;
- (id)initWithCommandBuffer:(id)a0;
- (void)amdMtl_HWL_CopyWithDirection:(id)a0 sourceOffset:(unsigned long long)a1 destinationResource:(id)a2 destinationOffset:(unsigned long long)a3 copySize:(unsigned long long)a4 direction:(BOOL)a5 event:(unsigned long long)a6;

@end
