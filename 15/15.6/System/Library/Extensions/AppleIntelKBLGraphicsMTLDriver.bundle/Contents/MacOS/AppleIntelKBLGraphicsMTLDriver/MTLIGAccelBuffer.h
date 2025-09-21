@class NSString;
@protocol MTLHeap, MTLDevice, MTLBuffer;

@interface MTLIGAccelBuffer : MTLIOAccelBuffer <MTLBufferSPI> {
    unsigned long long cacheId;
    unsigned long long IGResourceId;
    unsigned long long topLevelResourceID;
    struct SGfxRenderSurfaceState { union { struct { unsigned char Overridden381 : 6; unsigned char MediaBoundaryPixelMode : 2; unsigned char RenderCacheReadWriteMode : 1; unsigned char SamplerL2BypassModeDisable : 1; unsigned char VerticalLineStrideOffset : 1; unsigned char VerticalLineStride : 1; unsigned char TileMode : 2; unsigned char SurfaceHorizontalAlignment : 2; unsigned char SurfaceVerticalAlignment : 2; unsigned short SurfaceFormat : 9; unsigned char Astc_Enable : 1; unsigned char SurfaceArray : 1; unsigned char SurfaceType : 3; unsigned short SurfaceQpitch : 15; unsigned char Reserved395 : 4; unsigned char BaseMipLevel : 5; unsigned char Reserved397 : 1; unsigned char MemoryObjectControlState_IndexToMocsTables : 6; unsigned char Reserved399 : 1; unsigned short Width : 14; unsigned char Reserved401 : 2; unsigned short Height : 14; unsigned char Reserved403 : 2; unsigned int SurfacePitch : 18; unsigned char Reserved405 : 3; unsigned short Depth : 11; unsigned int Overridden407[1]; unsigned char MipCount : 4; unsigned char SurfaceMinLod : 4; unsigned char MipTailStartLod : 4; unsigned char Reserved411 : 2; unsigned char CoherencyType : 1; unsigned char Reserved413 : 3; unsigned char TiledResourceMode : 2; unsigned char EwaDisableForCube : 1; unsigned char YOffset : 3; unsigned char Reserved417 : 1; unsigned char XOffset : 7; unsigned short Overridden419 : 15; unsigned char Reserved420 : 1; unsigned short Overridden421 : 16; unsigned short ResourceMinLod : 12; unsigned char Reserved423 : 4; unsigned char ShaderChannelSelectAlpha : 3; unsigned char ShaderChannelSelectBlue : 3; unsigned char ShaderChannelSelectGreen : 3; unsigned char ShaderChannelSelectRed : 3; unsigned char Reserved428 : 2; unsigned char MemoryCompressionEnable : 1; unsigned char MemoryCompressionMode : 1; unsigned long SurfaceBaseAddress : 64; unsigned char QuiltWidth : 5; unsigned char QuiltHeight : 5; unsigned char Reserved434 : 2; unsigned long Overridden435 : 52; unsigned int Overridden436[4]; } ; struct { unsigned char CubeFaceEnablePositiveZ : 1; unsigned char CubeFaceEnableNegativeZ : 1; unsigned char CubeFaceEnablePositiveY : 1; unsigned char CubeFaceEnableNegativeY : 1; unsigned char CubeFaceEnablePositiveX : 1; unsigned char CubeFaceEnableNegativeX : 1; unsigned int Overridden445 : 26; unsigned int Overridden446[15]; } ; struct { unsigned char Reserved449 : 6; unsigned int Overridden450 : 26; unsigned int Overridden451[15]; } ; struct { unsigned int Overridden454[4]; unsigned char MultisamplePositionPaletteIndex : 3; unsigned char NumberOfMultisamples : 3; unsigned char MultisampledSurfaceStorageFormat : 1; unsigned short RenderTargetViewExtent : 11; unsigned short MinimumArrayElement : 11; unsigned char RenderTargetAndSampleUnormRotation : 2; unsigned char Reserved461 : 1; unsigned int Overridden462[11]; } ; struct { unsigned int Overridden465[4]; unsigned int Reserved466 : 32; unsigned int Overridden467[11]; } ; struct { unsigned int Overridden470[6]; unsigned char AuxiliarySurfaceMode : 3; unsigned short AuxiliarySurfacePitch : 9; unsigned char Reserved473 : 3; unsigned char Overridden474 : 1; unsigned short AuxiliarySurfaceQpitch : 15; unsigned char Reserved476 : 1; unsigned int Overridden477[9]; } ; struct { unsigned int Overridden480[6]; unsigned short YOffsetForUOrUvPlane : 14; unsigned char Reserved482 : 1; unsigned char Overridden483 : 1; unsigned short XOffsetForUOrUvPlane : 14; unsigned char Reserved485 : 1; unsigned char SeparateUvPlaneEnable : 1; unsigned int Overridden487[3]; unsigned int Overridden488 : 32; unsigned short YOffsetForVPlane : 14; unsigned char Reserved490 : 2; unsigned short XOffsetForVPlane : 14; unsigned char Reserved492 : 2; unsigned int Overridden493[4]; } ; struct { unsigned int Overridden496[10]; unsigned short Overridden497 : 12; unsigned long AuxiliarySurfaceBaseAddress : 52; unsigned int Overridden499[4]; } ; struct { unsigned int Overridden502[10]; unsigned int Overridden503 : 21; unsigned short AuxiliaryTableIndexForMediaCompressedSurface : 11; unsigned int Overridden505 : 32; unsigned int Overridden506[4]; } ; struct { unsigned int Overridden509[12]; unsigned int RedClearColor : 32; unsigned int GreenClearColor : 32; unsigned int BlueClearColor : 32; unsigned int AlphaClearColor : 32; } ; struct { unsigned int Overridden516[12]; unsigned int Reserved517 : 32; unsigned int Overridden518[3]; } ; struct { unsigned int Overridden521[12]; float HierarchicalDepthClearValue; unsigned int Reserved523 : 32; unsigned int Reserved524 : 32; unsigned int Reserved525 : 32; } ; } ; } hwSurfaceState;
    unsigned long long indirectionIndex;
}

@property unsigned long long uniqueIdentifier;
@property (readonly) struct __IOSurface { } *iosurface;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long parentGPUAddress;
@property (nonatomic) unsigned long long parentGPUSize;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long length;
@property (readonly) id<MTLBuffer> remoteStorageBuffer;
@property (readonly) unsigned long long gpuAddress;

- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (id)newTiledTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (void)removeAllDebugMarkers;
- (id)initWithDevice:(id)a0 iosurface:(struct __IOSurface { } *)a1 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a2 argsSize:(unsigned int)a3;
- (id)initWithDevice:(id)a0 pointer:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 sysMemSize:(unsigned long long)a4 vidMemSize:(unsigned long long)a5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a6 argsSize:(unsigned int)a7 deallocator:(id /* block */)a8;
- (id)initWithDevice:(id)a0 pointer:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 sysMemSize:(unsigned long long)a4 vidMemSize:(unsigned long long)a5 gpuAddress:(unsigned long long)a6 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a7 argsSize:(unsigned int)a8 deallocator:(id /* block */)a9;
- (id)initWithHeap:(id)a0 resource:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3;
- (void)generateIndirectionIndex:(id)a0 resourceIndex:(unsigned long long)a1;

@end
