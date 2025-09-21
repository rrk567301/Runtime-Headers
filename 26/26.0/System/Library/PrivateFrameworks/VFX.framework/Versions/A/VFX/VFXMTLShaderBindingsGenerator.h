@class NSArray, NSDictionary, NSMutableDictionary;

@interface VFXMTLShaderBindingsGenerator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _generateLock;
    struct { int stage; NSArray *bindings; NSDictionary *programBindingBlocks; struct __CFXRenderingOverride *overrides; } _current;
    NSMutableDictionary *_nodeBindings;
    NSMutableDictionary *_frameBindings;
    NSMutableDictionary *_shadableBindings;
    NSMutableDictionary *_lightBindings;
    struct { char vertexIndex; char fragmentIndex; } _worldBuffer;
}

+ (void)allocateRegistry;
+ (void)deallocateRegistry;
+ (void)registerArgument:(id)a0 frequency:(int)a1 block:(id /* block */)a2;
+ (void)registerArgument:(id)a0 frequency:(int)a1 needsRenderResource:(BOOL)a2 block:(id /* block */)a3;
+ (void)registerSemantic:(id)a0 withBlock:(id /* block */)a1;
+ (void)registerShadableArgumentBindingBlockForBuffers:(id /* block */)a0 textures:(id /* block */)a1 samplers:(id /* block */)a2;
+ (void)registerCustomProgramBindingBlockTrampoline:(id /* block */)a0;
+ (void)unregisterBindings;

- (void)dealloc;
- (id)init;
- (void)_checkForAssociatedSamplerOnBinding:(id)a0 argument:(id)a1;
- (id)_dictionaryForFrequency:(int)a0;
- (void)addResourceBindingsForArgument:(id)a0 frequency:(int)a1 needsRenderResource:(BOOL)a2 block:(id /* block */)a3;
- (void)_parseBindings:(id)a0 function:(id)a1 renderPipeline:(id)a2 isClientProgram:(BOOL)a3 customBindingsOut:(id *)a4;
- (long long)_searchBindings:(id)a0 forArgumentNamed:(id)a1 type:(long long)a2;
- (void)generateBindingsForPipeline:(id)a0 withReflection:(id)a1 program:(struct __CFXProgram { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; unsigned char x1 : 1; unsigned char x2 : 1; struct __CFXProgramDelegate *x3; struct __CFString *x4[2]; struct __CFString *x5; struct __CFString *x6; struct __CFDictionary *x7; struct __CFSet *x8; void *x9; struct __CFDictionary *x10; int x11; id /* block */ x12; id /* block */ x13; unsigned long long x14; unsigned int x15; } *)a2 materialIdentifier:(struct __CFString { } *)a3 overrides:(struct __CFXRenderingOverride { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFXRasterizerStates *x1; } *)a4;

@end
