@interface VFXCommonProfileProgramGenerator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _programMutex;
    struct __CFDictionary { } *_shaders;
    struct __CFDictionary { } *_trackedResourcesToHashcode;
}

+ (id)commonProfileGeneratorAllowingHotReload:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void)emptyShaderCache;
- (struct __CFXProgram { } *)programWithHashCode:(struct __CFXProgramHashCode { } *)a0 engineContext:(struct __CFXEngineContext { } *)a1 trackedResource:(id)a2 introspectionDataPtr:(struct { long long x0; struct *x1; struct { long long x0; long long x1; } x2[4]; struct { long long x0; long long x1; } x3[4]; long long x4[4]; BOOL x5; } *)a3;
- (void)releaseProgramForResource:(id)a0;

@end
