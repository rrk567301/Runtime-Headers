@class _FEFocusInputDeviceInfo, _FEFocusSystem, NSString;
@protocol _FEFocusEnvironment;

@interface _FEFocusUpdateRequest : NSObject <_FEFocusUpdateRequesting, NSCopying>

@property (readonly, weak, nonatomic) id<_FEFocusEnvironment> destinationEnvironment;
@property (readonly, nonatomic) char isFocusRemovalRequest;
@property (nonatomic) char shouldPlayFocusSound;
@property (nonatomic) char allowsFocusingCurrentItem;
@property (nonatomic) char allowsOverridingPreferedFocusEnvironments;
@property (nonatomic) char resetsUpdateThrottle;
@property (readonly, weak, nonatomic) id<_FEFocusEnvironment> environment;
@property (nonatomic) char allowsDeferral;
@property (nonatomic, getter=shouldScrollIfNecessary) char scrollIfNecessary;
@property (readonly, weak, nonatomic) _FEFocusSystem *focusSystem;
@property (readonly, nonatomic, getter=isMovementRequest) char movementRequest;
@property (readonly, nonatomic) char requiresNextFocusedItem;
@property (readonly, nonatomic) char requiresEnvironmentValidation;
@property (readonly, nonatomic) char shouldPerformHapticFeedback;
@property (readonly, nonatomic) _FEFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestForRemovingFocusInFocusSystem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)cacheCurrentFocusSystem;
- (char)canMergeWithRequest:(id)a0;
- (id)initWithFocusSystem:(id)a0 environment:(id)a1;
- (id)initWithFocusSystem:(id)a0 environment:(id)a1 destinationEnvironment:(id)a2;
- (char)isValidInFocusSystem:(id)a0;
- (id)requestByMergingWithRequest:(id)a0;
- (id)requestByRedirectingRequestToEnvironment:(id)a0;
- (id)requestByRedirectingRequestToNextContainerEnvironment;

@end
