@interface AXEventTapManagerFilterEvents : NSObject

@property (nonatomic) char wantsDigitizerEvents;
@property (nonatomic) char wantsKeyboardEvents;
@property (nonatomic) char wantsATVRemoteEvents;
@property (nonatomic) char wantsLisaEvents;
@property (nonatomic) char wantsMouseEvents;
@property (nonatomic) char wantsAccessibilityEvents;
@property (nonatomic) char wantsVolumeButtonEvents;
@property (nonatomic) char wantsStylusEvents;

@end
