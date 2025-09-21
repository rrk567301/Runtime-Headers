@class NSObject;
@protocol OS_dispatch_data;

@interface GFX9AMD_MTLLibrary : NSObject {
    struct AmdMtlLibraryMembersRec { struct AMDPPMemBlockRec { union { struct AMDPPMemObjRec *host; struct AMDPPMemObjHeaderRec *hostHeader; } ; unsigned int offset; unsigned int dataSize; struct AMDPPMemBlockRec *prev; struct AMDPPMemBlockRec *next; } gpuMem; struct vector<AMDMTLRelocationEntry, std::allocator<AMDMTLRelocationEntry>> { struct AMDMTLRelocationEntry *__begin_; struct AMDMTLRelocationEntry *__end_; struct __compressed_pair<AMDMTLRelocationEntry *, std::allocator<AMDMTLRelocationEntry>> { struct AMDMTLRelocationEntry *__value_; } __end_cap_; } reloc; struct vector<AMDMTLSymbolEntry, std::allocator<AMDMTLSymbolEntry>> { struct AMDMTLSymbolEntry *__begin_; struct AMDMTLSymbolEntry *__end_; struct __compressed_pair<AMDMTLSymbolEntry *, std::allocator<AMDMTLSymbolEntry>> { struct AMDMTLSymbolEntry *__value_; } __end_cap_; } syms; struct vector<char, std::allocator<char>> { char *__begin_; char *__end_; struct __compressed_pair<char *, std::allocator<char>> { char *__value_; } __end_cap_; } strings; unsigned short maxComputeVGPRs; unsigned short maxComputeSGPRs; unsigned int scratchSizeOfEntryFunc; unsigned int maxScratchSizeOfLibFuncs; unsigned char lastUsedTexture; unsigned char lastUsedSampler; unsigned char lastUsedBuffer; unsigned char lastUsedBufferStride; unsigned char lastUsedLDS; unsigned int staticThreadgroupMemoryLength; unsigned int maxThreadPerGroup; unsigned char hasEntryFunc; unsigned char OSVersion[3]; unsigned int maxStackCallDepth; BOOL usesRaytracing; struct { unsigned long long textureUsage[4]; unsigned int dirtyBuffers[1]; unsigned int LDSUsgBitMask[1]; } resourceDirtyMask; NSObject<OS_dispatch_data> *packedBinary; struct AMD_MtlRgpShaderLibrary *traceData; } _amd;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPackedBinary:(id)a0;

@end
