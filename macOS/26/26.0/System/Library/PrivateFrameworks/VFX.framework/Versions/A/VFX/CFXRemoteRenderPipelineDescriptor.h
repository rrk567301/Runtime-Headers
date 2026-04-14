@class MTLVertexDescriptor, CFXRemoteFunctionDescription;
@protocol MTLArgumentEncoder;

@interface CFXRemoteRenderPipelineDescriptor : NSObject <NSSecureCoding> {
    struct { BOOL blendingEnabled; unsigned char _writeMask; unsigned char colorSrcBlend; unsigned char colorDstBlend; unsigned char colorBlendOp; unsigned char alphaSrcBlend; unsigned char alphaDstBlend; unsigned char alphaBlendOp; } _blendingDesc[8];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CFXRemoteFunctionDescription *vertexFunction;
@property (retain, nonatomic) CFXRemoteFunctionDescription *fragmentFunction;
@property (retain, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic) unsigned long long primitiveTopologyClass;
@property (nonatomic) BOOL rasterizationEnabled;
@property (nonatomic) long long maxVertexAmplificationCount;
@property (retain, nonatomic) id<MTLArgumentEncoder> argumentEncoder;
@property (retain, nonatomic) id programHashCode;

- (id)initWithDescriptor:(struct { struct { struct __CFXProgramHashCode *x0; struct __CFXProgram *x1; struct __CFString *x2; struct __CFString *x3; struct __CFXRenderingOverride *x4; struct __CFXBlendStates *x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; id x10; unsigned long long x11; unsigned char x12; unsigned char x13; id x14; struct { unsigned char x0; id /* block */ x1; } x15; unsigned long long x16; } x0; id x1; struct { unsigned long long x0[8]; unsigned long long x1; unsigned long long x2; unsigned char x3; } x2; struct __CFXBlendStates *x3; unsigned long long x4[8]; unsigned char x5; id x6; id x7; id x8; id x9; id x10; id x11; id /* block */ x12; unsigned char x13; BOOL x14; BOOL x15; BOOL x16; })a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; })blendingDescAt:(long long)a0;
- (void)setBlendingDesc:(struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; })a0 at:(long long)a1;

@end
