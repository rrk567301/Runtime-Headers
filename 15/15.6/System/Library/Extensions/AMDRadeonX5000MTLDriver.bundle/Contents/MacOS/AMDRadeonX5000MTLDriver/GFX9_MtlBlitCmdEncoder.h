@class NSString;
@protocol MTLDevice;

@interface GFX9_MtlBlitCmdEncoder : GFX9AMD_MtlBlitCmdEncoder <MTLBlitCommandEncoder, MTLCommandEncoderSPI> {
    struct GFX9_BlitCmdEncoderMembersRec { unsigned int unused; } _gfx9blit;
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

@end
