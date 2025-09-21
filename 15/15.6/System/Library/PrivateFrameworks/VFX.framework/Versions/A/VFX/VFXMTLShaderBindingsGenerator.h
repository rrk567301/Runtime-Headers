@class NSArray, NSDictionary, NSMutableDictionary;

@interface VFXMTLShaderBindingsGenerator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _generateLock;
    struct { int stage; NSArray *bindings; NSDictionary *customBlocks; struct __CFXFXPass *pass; } _current;
    NSMutableDictionary *_nodeBindings;
    NSMutableDictionary *_frameBindings;
    NSMutableDictionary *_shadableBindings;
    NSMutableDictionary *_passBindings;
    NSMutableDictionary *_lightBindings;
    struct { char vertexIndex; char fragmentIndex; } _worldBuffer;
}

+ (void)allocateRegistry;
+ (void)deallocateRegistry;
+ (void)registerArgument:(id)a0 frequency:(int)a1 block:(id /* block */)a2;
+ (void)registerArgument:(id)a0 frequency:(int)a1 needsRenderResource:(char)a2 block:(id /* block */)a3;
+ (void)registerSemantic:(id)a0 withBlock:(id /* block */)a1;
+ (void)registerShadableArgumentBindingBlockForBuffers:(id /* block */)a0 textures:(id /* block */)a1 samplers:(id /* block */)a2;
+ (void)registerUserBlockTrampoline:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void)_checkForAssociatedSamplerOnBinding:(id)a0 argument:(id)a1;
- (id)_dictionaryForFrequency:(int)a0;
- (char)addPassResourceBindingsForArgument:(id)a0;
- (void)addResourceBindingsForArgument:(id)a0 frequency:(int)a1 needsRenderResource:(char)a2 block:(id /* block */)a3;
- (void)generateBindingsForPipeline:(id)a0 withReflection:(id)a1 program:(struct __CFXFXProgram { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; unsigned char x1 : 1; unsigned char x2 : 1; struct __CFXFXProgramDelegate *x3; struct __CFString *x4[2]; struct __CFString *x5; struct __CFString *x6; struct __CFDictionary *x7; struct __CFSet *x8; void *x9; struct __CFDictionary *x10; void *x11; unsigned long long x12; unsigned int x13; } *)a2 material:(struct __CFXMaterial { } *)a3 geometry:(struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)a4 pass:(struct __CFXFXPass { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; int x2; int x3; BOOL x4; struct __CFXFXRenderGraph *x5; struct __CFString *x6; struct __CFString *x7; struct __CFString *x8; struct __CFString *x9; BOOL x10; struct __CFXFXProgram *x11; struct __CFXMaterial *x12; struct __CFXBlendStates *x13; struct __CFXRasterizerStates *x14; struct CFXColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x15; unsigned char x16; unsigned int x17; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; unsigned char x42 : 1; unsigned char x43 : 1; unsigned char x44 : 1; unsigned char x45 : 1; struct __CFXRendererElement *x46; unsigned long long x47; unsigned long long x48; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void *x8; } x49; struct { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9[4]; } x0[8]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9[4]; } x1; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x50; struct CGPoint { double x0; double x1; } x51; float x52[9]; struct *x53; unsigned int x54; struct __CFXNode *x55; struct __CFXNode *x56; struct __CFArray *x57; struct __CFXNode *x58; unsigned char x59; struct __CFString *x60; struct __CFString *x61; struct __CFString *x62; struct __CFXFXPassInput **x63; long long x64; long long x65; struct __CFDictionary *x66; id /* block */ x67; id /* block */ x68; struct __CFDictionary *x69; void *x70; } *)a5;
- (void)_parseBindings:(id)a0 function:(id)a1 renderPipeline:(id)a2;
- (long long)_searchBindings:(id)a0 forArgumentNamed:(id)a1 type:(long long)a2;

@end
