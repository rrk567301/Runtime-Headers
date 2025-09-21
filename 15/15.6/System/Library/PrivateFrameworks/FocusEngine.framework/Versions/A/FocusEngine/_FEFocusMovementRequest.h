@class NSString, _FEFocusItemInfo, _FEFocusSearchInfo, _FEFocusMovementInfo, _FEFocusInputDeviceInfo, _FEFocusSystem;

@interface _FEFocusMovementRequest : NSObject <_FEFocusUpdateRequesting>

@property (retain, nonatomic) _FEFocusItemInfo *focusedItemInfo;
@property (retain, nonatomic) _FEFocusMovementInfo *movementInfo;
@property (retain, nonatomic) _FEFocusSearchInfo *searchInfo;
@property (retain, nonatomic) _FEFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly, nonatomic) _FEFocusMovementRequest *fallbackRequest;
@property (nonatomic) char shouldPerformHapticFeedback;
@property (nonatomic) char overridesDeferredFocusUpdate;
@property (readonly, weak, nonatomic) _FEFocusSystem *focusSystem;
@property (readonly, nonatomic, getter=isMovementRequest) char movementRequest;
@property (readonly, nonatomic, getter=shouldScrollIfNecessary) char scrollIfNecessary;
@property (readonly, nonatomic) char shouldPlayFocusSound;
@property (readonly, nonatomic) char requiresNextFocusedItem;
@property (readonly, nonatomic) char requiresEnvironmentValidation;
@property (readonly, nonatomic) char allowsFocusingCurrentItem;
@property (readonly, nonatomic) char allowsDeferral;
@property (readonly, nonatomic) char allowsOverridingPreferedFocusEnvironments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
