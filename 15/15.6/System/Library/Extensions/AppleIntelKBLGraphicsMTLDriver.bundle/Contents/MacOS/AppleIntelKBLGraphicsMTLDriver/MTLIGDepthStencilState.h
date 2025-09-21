@class NSString;
@protocol MTLDevice;

@interface MTLIGDepthStencilState : _MTLDepthStencilState <MTLDepthStencilState> {
    struct SGfx3dStateWmDepthStencil { unsigned char DWordLength : 8; unsigned char Reserved2371 : 8; unsigned char _3DCommandSubOpcode : 8; unsigned char _3DCommandOpcode : 3; unsigned char CommandSubtype : 2; unsigned char CommandType : 3; unsigned char DepthBufferWriteEnable : 1; unsigned char DepthTestEnable : 1; unsigned char StencilBufferWriteEnable : 1; unsigned char StencilTestEnable : 1; unsigned char DoubleSidedStencilEnable : 1; unsigned char DepthTestFunction : 3; unsigned char StencilTestFunction : 3; unsigned char BackFaceStencilPassDepthPassOp : 3; unsigned char BackFaceStencilPassDepthFailOp : 3; unsigned char BackFaceStencilFailOp : 3; unsigned char BackFaceStencilTestFunction : 3; unsigned char StencilPassDepthPassOp : 3; unsigned char StencilPassDepthFailOp : 3; unsigned char StencilFailOp : 3; unsigned char BackFaceStencilWriteMask : 8; unsigned char BackFaceStencilTestMask : 8; unsigned char StencilWriteMask : 8; unsigned char StencilTestMask : 8; unsigned char BackFaceStencilReferenceValue : 8; unsigned char StencilReferenceValue : 8; unsigned short Reserved2396 : 16; } depthStencilState;
    unsigned long long hashDepthStencilID;
}

@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 depthStencilDescriptor:(id)a1;
- (char)initializeDepthStencilState:(id)a0;

@end
