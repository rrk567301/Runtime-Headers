@class NSString;
@protocol MTLDevice;

@interface GFX10_MtlDepthStencilState : _MTLDepthStencilState <MTLDepthStencilState> {
    struct GFX10_DepthStencilStateMembersRec { struct GFX10_DepthStencilHwCtxRegsRec { union DB_STENCIL_CONTROL { struct { unsigned char STENCILFAIL : 4; unsigned char STENCILZPASS : 4; unsigned char STENCILZFAIL : 4; unsigned char STENCILFAIL_BF : 4; unsigned char STENCILZPASS_BF : 4; unsigned char STENCILZFAIL_BF : 4; unsigned char  : 8; } bits; struct { unsigned char STENCILFAIL : 4; unsigned char STENCILZPASS : 4; unsigned char STENCILZFAIL : 4; unsigned char STENCILFAIL_BF : 4; unsigned char STENCILZPASS_BF : 4; unsigned char STENCILZFAIL_BF : 4; unsigned char  : 8; } bitfields; unsigned int u32All; int i32All; float f32All; } DB_STENCIL_CONTROL; union DB_STENCILREFMASK { struct { unsigned char STENCILTESTVAL : 8; unsigned char STENCILMASK : 8; unsigned char STENCILWRITEMASK : 8; unsigned char STENCILOPVAL : 8; } bits; struct { unsigned char STENCILTESTVAL : 8; unsigned char STENCILMASK : 8; unsigned char STENCILWRITEMASK : 8; unsigned char STENCILOPVAL : 8; } bitfields; unsigned int u32All; int i32All; float f32All; } DB_STENCILREFMASK; union DB_STENCILREFMASK_BF { struct { unsigned char STENCILTESTVAL_BF : 8; unsigned char STENCILMASK_BF : 8; unsigned char STENCILWRITEMASK_BF : 8; unsigned char STENCILOPVAL_BF : 8; } bits; struct { unsigned char STENCILTESTVAL_BF : 8; unsigned char STENCILMASK_BF : 8; unsigned char STENCILWRITEMASK_BF : 8; unsigned char STENCILOPVAL_BF : 8; } bitfields; unsigned int u32All; int i32All; float f32All; } DB_STENCILREFMASK_BF; union DB_DEPTH_CONTROL { struct { unsigned char STENCIL_ENABLE : 1; unsigned char Z_ENABLE : 1; unsigned char Z_WRITE_ENABLE : 1; unsigned char DEPTH_BOUNDS_ENABLE : 1; unsigned char ZFUNC : 3; unsigned char BACKFACE_ENABLE : 1; unsigned char STENCILFUNC : 3; unsigned short  : 9; unsigned char STENCILFUNC_BF : 3; unsigned char  : 7; unsigned char ENABLE_COLOR_WRITES_ON_DEPTH_FAIL : 1; unsigned char DISABLE_COLOR_WRITES_ON_DEPTH_PASS : 1; } bits; struct { unsigned char STENCIL_ENABLE : 1; unsigned char Z_ENABLE : 1; unsigned char Z_WRITE_ENABLE : 1; unsigned char DEPTH_BOUNDS_ENABLE : 1; unsigned char ZFUNC : 3; unsigned char BACKFACE_ENABLE : 1; unsigned char STENCILFUNC : 3; unsigned short  : 9; unsigned char STENCILFUNC_BF : 3; unsigned char  : 7; unsigned char ENABLE_COLOR_WRITES_ON_DEPTH_FAIL : 1; unsigned char DISABLE_COLOR_WRITES_ON_DEPTH_PASS : 1; } bitfields; unsigned int u32All; int i32All; float f32All; } DB_DEPTH_CONTROL; } depthStencilHwCtxRegs; } m_members;
}

@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 depthStencilDescriptor:(id)a1;

@end
