@class NSObject, AMPAvatarLockup;
@protocol AMPAvatarLockupModel;

@interface AMPAvatarLabeledLockup : AMPBindableView

@property (weak, nonatomic) AMPAvatarLockup *portrait;
@property (retain, nonatomic) NSObject<AMPAvatarLockupModel> *viewModel;
@property (nonatomic) BOOL showRolledOver;

- (void).cxx_destruct;
- (id)init;
- (void)drawFocusRingMask;
- (id)firstResponderCandidate;

@end
