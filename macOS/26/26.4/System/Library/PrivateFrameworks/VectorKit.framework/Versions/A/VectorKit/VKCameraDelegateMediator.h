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

- (void)mapLayerWillChangeRegionAnimated:(BOOL)a0;
- (void)willBeginPitchingAccess;
- (void)mapLayerCanEnter3DModeDidChange:(BOOL)a0;
- (void)pushAccess:(void *)a0 animated:(BOOL)a1;
- (id)mapLayerPresentationForAnnotation:(id)a0;
- (void)willBeginPanningAccess;
- (void)processDeferredDelegates;
- (void)didEndRotatingAccess;
- (void)mapLayerWillPerformZoomBounceAnimation;
- (void)mapLayerCanZoomOutDidChange:(BOOL)a0;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)a0;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)didEndPitchingAccess;
- (void)willBeginPinchingAccess;
- (void)didEndPanningAccess;
- (struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *x0; struct __shared_weak_count *x1; } x0; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char x0[24]; } x0; void *x1; } x0; } x1; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { union type { unsigned char x0[24]; } x0; void *x1; } x0; } x2; })willBeginRegionChangeAccess:(BOOL)a0;
- (void)mapLayerCanZoomInDidChange:(BOOL)a0;
- (void)didEndPinchingAccess;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)didEndRegionChangeAccess:(void *)a0;
- (void)mapLayerDidChangeVisibleRegion;
- (void)insertDeferredDelegateFence;
- (void).cxx_destruct;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (void)mapLayerMuninAvailabilityDidChange:(long long)a0;
- (void)mapLayerWasUnableToAnimate;
- (id)init;
- (void)mapLayerDidBecomePitched:(BOOL)a0;
- (id).cxx_construct;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)didEndAnimatingAccess;
- (void)eraseDeferredDelegateFence;
- (void)popAccess:(void *)a0;
- (void)willBeginRotatingAccess;
- (void)mapLayerWillAnimateToLocation:(struct { double x0; double x1; })a0;
- (void)willBeginAnimatingAccess;
- (void)dealloc;

@end
