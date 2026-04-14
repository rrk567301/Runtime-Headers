@class NSString;
@protocol VKMapViewCameraDelegate;

@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraAccessManagedDelegate> {
    BOOL _delegateUpdateFenced;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _regionChangeState;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _pinchingAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _panningAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _rotatingAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _pitchAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _animationAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _directAccess;
    struct ReferenceCountedAccess<unsigned long> { struct shared_ptr<unsigned long> { unsigned long long *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (unsigned long &)> { struct __value_func<void (unsigned long &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (unsigned long &)> { struct __value_func<void (unsigned long &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _visibleRegionState;
}

@property (nonatomic) struct queue<std::function<void (VKCameraDelegateMediator *)>, std::deque<std::function<void (VKCameraDelegateMediator *)>>> { struct deque<std::function<void (VKCameraDelegateMediator *)>, std::allocator<std::function<void (VKCameraDelegateMediator *)>>> { struct __split_buffer<std::function<void (VKCameraDelegateMediator *)> *, std::allocator<std::function<void (VKCameraDelegateMediator *)> *>> { void **__first_; void **__begin_; void **__end_; struct { void **__cap_; } ; } __map_; unsigned long long __start_; struct { unsigned long long __size_; } ; } c; } deferredDelegates;
@property (weak, nonatomic) id<VKMapViewCameraDelegate> cameraDelegate;
@property (nonatomic) BOOL isChangingMapType;
@property (readonly, nonatomic) const void *regionChangeState;
@property (readonly, nonatomic) unsigned long long regionChangeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBeginPitchingAccess;
- (void)willBeginRotatingAccess;
- (void)willBeginPanningAccess;
- (void)mapLayerCanZoomOutDidChange:(BOOL)a0;
- (void)mapLayerWillChangeRegionAnimated:(BOOL)a0;
- (void)pushAccess:(void *)a0 animated:(BOOL)a1;
- (void)eraseDeferredDelegateFence;
- (void)insertDeferredDelegateFence;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (id)init;
- (void)didEndPanningAccess;
- (id)mapLayerPresentationForAnnotation:(id)a0;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerCanZoomInDidChange:(BOOL)a0;
- (void)popAccess:(void *)a0;
- (void)didEndRotatingAccess;
- (void)didEndPinchingAccess;
- (void)didEndPitchingAccess;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)a0;
- (void)processDeferredDelegates;
- (void)mapLayerWillPerformZoomBounceAnimation;
- (struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *x0; struct __shared_weak_count *x1; } x0; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char x0[24]; } x0; void *x1; } x0; } x1; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char x0[24]; } x0; void *x1; } x0; } x2; })willBeginRegionChangeAccess:(BOOL)a0;
- (void).cxx_destruct;
- (void)mapLayerWillAnimateToLocation:(struct { double x0; double x1; })a0;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)dealloc;
- (void)mapLayerMuninAvailabilityDidChange:(long long)a0;
- (void)mapLayerDidChangeVisibleRegion;
- (void)willBeginPinchingAccess;
- (void)mapLayerDidBecomePitched:(BOOL)a0;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (void)mapLayerCanEnter3DModeDidChange:(BOOL)a0;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)willBeginAnimatingAccess;
- (void)didEndAnimatingAccess;
- (id).cxx_construct;
- (void)didEndRegionChangeAccess:(void *)a0;
- (void)mapLayerWasUnableToAnimate;

@end
