@class NSString;

@interface QCSCN_Camera : NSObject <QCSCN_Animatable, NSCopying> {
    id _reserved;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double xFov;
@property (nonatomic) double yFov;
@property (nonatomic) double zNear;
@property (nonatomic) double zFar;
@property (nonatomic) BOOL usesOrthographicProjection;

+ (id)camera;
+ (id)propertyKeys;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)cameraWithCameraRef:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct C3DMatrix4x4 { union { double x0[16]; double x1[4][4]; } x0; } x8; } x2; float x3; float x4; } *)a0;
+ (id)argumentsForSelector:(SEL)a0;
+ (Class)typeForProperty:(id)a0;
+ (int)_baseTypeForProperty:(id)a0;

- (void)dealloc;
- (id)copy;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (id)identifier;
- (void)setIdentifier:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeAnimationForKey:(id)a0;
- (void)removeAllAnimations;
- (id)animationKeys;
- (id)animationForKey:(id)a0;
- (void)addAnimation:(id)a0;
- (void)setAperture:(double)a0;
- (double)aperture;
- (id)propertyKeys;
- (struct __C3DAnimationTarget { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; void *x2; int x3; int x4; struct __CFString *x5; struct __CFArray *x6; } *)targetForKey:(id)a0;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFArray *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFSet *x5; struct __CFArray *x6; BOOL x7; BOOL x8; double x9; double x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; int x12; int x13; } *)animationManager;
- (void)pauseAnimationForKey:(id)a0;
- (void)resumeAnimationForKey:(id)a0;
- (id)initWithCameraRef:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct C3DMatrix4x4 { union { double x0[16]; double x1[4][4]; } x0; } x8; } x2; float x3; float x4; } *)a0;
- (id)initPresentationCameraWithCameraRef:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct C3DMatrix4x4 { union { double x0[16]; double x1[4][4]; } x0; } x8; } x2; float x3; float x4; } *)a0;
- (void)_syncEntityObjCModel;
- (void)_sceneRefDidChange;
- (void)__removeAnimationForKey:(id)a0;
- (void)removeAllAnimationsBeforeDying:(void *)a0;
- (void)_syncObjCAnimations;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1;
- (void)_syncObjCModel;
- (id)presentationCamera;
- (void)_registerAsObserver;
- (double)xMag;
- (void)setXMag:(double)a0;
- (double)yMag;
- (void)setYMag:(double)a0;
- (struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct C3DMatrix4x4 { union { double x0[16]; double x1[4][4]; } x0; } x8; } x2; float x3; float x4; } *)cameraRef;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })projectionTransform;
- (double)focalDistance;
- (void)setFocalDistance:(double)a0;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)sceneRef;
- (void *)__CFObject;
- (void)setSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)a0;

@end
