@class NSString;
@protocol VFXDrawCallContext;

@interface VFXMTLREContext : NSObject {
    id<VFXDrawCallContext> _drawCallContext;
    struct array<(anonymous namespace)::BufferMetadata, 13UL> { struct BufferMetadata { NSString *name; int scope; BOOL isArray; BOOL resolved; long long offset; long long size; } __elems_[13]; } _entityBufferMetadata;
    struct VFX_RE_C_EntityConstants_s { unsigned int lodDrawInfo; float fadeOpacity; float tintFactor; unsigned int debugMode; struct { unsigned short offset; unsigned short count; } clippingIndexSlice; unsigned int samplerIndexCount; float sfFactor; unsigned int instanceCount; float fakeFresnelOpacityBasedBoostFactor; unsigned char btTextureReadIndex; unsigned char stencilReferenceValue; BOOL receivesIBLShadow; float environmentLightingWeight; void /* unknown type, empty encoding */ portalPlane; void /* unknown type, empty encoding */ dfColor; void /* unknown type, empty encoding */ dfColorStraight; unsigned long long entityIdentifier; unsigned long long meshPartIdentifier; BOOL btUIBreakthroughEnabled; unsigned short btUIBreakthroughInfluence; float meshShadowIntensity; unsigned short lightGroupIdentifier; float depthMitigationTransitionFactor; float sceneUnderstandingTransitionFactor; float visualDepthStaticOcclusionTransitionFactor; unsigned short invPortalLightBlendDistance; BOOL automaticallyInstanced; unsigned short visualDepthStaticOcclusionDepthBias; } _entityConstants;
    struct BufferSlice { struct { void *_buffer; unsigned int _offset; unsigned int _length; } impl; } _currentEntityBuffer;
    struct array<(anonymous namespace)::BufferMetadata, 13UL> { struct BufferMetadata { NSString *name; int scope; BOOL isArray; BOOL resolved; long long offset; long long size; } __elems_[13]; } _viewBufferMetadata;
    struct VFX_RE_C_ViewConstants_s { struct { void /* unknown type, empty encoding */ columns[4]; } crWorldToViewArray[2]; struct { void /* unknown type, empty encoding */ columns[4]; } crWorldToPhysicalCameraArray[2]; struct { void /* unknown type, empty encoding */ columns[4]; } crWorldToProjArray[2]; struct { void /* unknown type, empty encoding */ columns[4]; } crWorldToHomographyArray[2]; struct { void /* unknown type, empty encoding */ columns[4]; } viewToProjArray[2]; struct { void /* unknown type, empty encoding */ columns[4]; } projToViewArray[2]; void /* unknown type, empty encoding */ crwsCameraPositionArray[2]; void /* unknown type, empty encoding */ vrrMapPhysicalSizeArray[2]; void /* unknown type, empty encoding */ viewportPercentsArray[2]; void /* unknown type, empty encoding */ viewportPercents; void /* unknown type, empty encoding */ renderTargetSize; void /* unknown type, empty encoding */ vrrMapScreenSize; void /* unknown type, empty encoding */ renderTargetColorFormats; void /* unknown type, empty encoding */ renderTargetDepthStencilFormatSampleCount; unsigned int tonemapInPlace; unsigned int viewportCount; unsigned int useVertexAmplification; float povcClipDistance; unsigned int cameraEye; void /* unknown type, empty encoding */ additiveTintColor; unsigned short vignettingFadeoutDistanceNormalization; unsigned short vignettingTotalFadeoutDistance; void /* unknown type, empty encoding */ vignettingPivotPosition; void /* unknown type, empty encoding */ portalClipPlane; } _viewConstants;
    struct BufferSlice { struct { void *_buffer; unsigned int _offset; unsigned int _length; } impl; } _currentViewBuffer;
    struct array<(anonymous namespace)::BufferMetadata, 13UL> { struct BufferMetadata { NSString *name; int scope; BOOL isArray; BOOL resolved; long long offset; long long size; } __elems_[13]; } _globalBufferMetadata;
    struct VFX_RE_C_GlobalConstants_s { void /* unknown type, empty encoding */ crwsReferencePosition; float time; unsigned int frameCount; void /* unknown type, empty encoding */ dfColor; void /* unknown type, empty encoding */ dfColorStraight; } _globalConstants;
    struct BufferSlice { struct { void *_buffer; unsigned int _offset; unsigned int _length; } impl; } _currentGlobalBuffer;
    struct { void /* unknown type, empty encoding */ columns[4]; } _crWorldFromWorldMatrix;
    struct re_vfx_object_constants { unsigned short render_options; unsigned short perceptual_blending_mode; } _vfxObjectConstants;
    struct BufferSlice { struct { void *_buffer; unsigned int _offset; unsigned int _length; } impl; } _currentObjectBuffer;
    struct BufferSlice { struct { void *_buffer; unsigned int _offset; unsigned int _length; } impl; } _sceneTexturesArgumentBuffer;
    BOOL _optionalSelectorsInitialized;
    BOOL _respondToSystemTreatmentRenderOptions;
}

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (struct BufferSlice { struct { void *x0; unsigned int x1; unsigned int x2; } x0; })_buffer:(int)a0 :(id)a1;
- (struct BufferSlice { struct { void *x0; unsigned int x1; unsigned int x2; } x0; })_buffer:(int)a0 :(id)a1 fallback:(id)a2;
- (struct VFX_RE_C_EntityConstants_s { unsigned int x0; float x1; float x2; unsigned int x3; struct { unsigned short x0; unsigned short x1; } x4; unsigned int x5; float x6; unsigned int x7; float x8; unsigned char x9; unsigned char x10; BOOL x11; float x12; unsigned long long x13; unsigned long long x14; BOOL x15; unsigned short x16; float x17; unsigned short x18; float x19; float x20; float x21; unsigned short x22; BOOL x23; unsigned short x24; })_computeEntityData;
- (struct VFX_RE_C_GlobalConstants_s { float x0; unsigned int x1; })_computeGlobalData;
- (struct re_vfx_object_constants { unsigned short x0; unsigned short x1; })_computeVFXObjectConstants;
- (struct VFX_RE_C_ViewConstants_s { struct { void /* unknown type, empty encoding */ x0[4]; } x0[2]; struct { void /* unknown type, empty encoding */ x0[4]; } x1[2]; struct { void /* unknown type, empty encoding */ x0[4]; } x2[2]; struct { void /* unknown type, empty encoding */ x0[4]; } x3[2]; struct { void /* unknown type, empty encoding */ x0[4]; } x4[2]; struct { void /* unknown type, empty encoding */ x0[4]; } x5[2]; void /* unknown type, empty encoding */ x6[2]; void /* unknown type, empty encoding */ x7[2]; void /* unknown type, empty encoding */ x8[2]; unsigned int x9; unsigned int x10; unsigned int x11; float x12; unsigned int x13; unsigned short x14; unsigned short x15; })_computeViewData;
- (id)_texture:(int)a0 :(id)a1;
- (id)_texture:(int)a0 :(id)a1 fallback:(id)a2;
- (id)_texture:(int)a0 :(id)a1 fallback:(id)a2 fallbackScope:(int)a3;
- (void)_updateAvailableSelectors;

@end
