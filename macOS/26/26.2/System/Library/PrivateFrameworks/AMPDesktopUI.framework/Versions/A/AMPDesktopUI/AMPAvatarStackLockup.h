@class NSTextField, NSView, NSLayoutYAxisAnchor, NSLayoutConstraint;
@protocol AMPAvatarStackLockupModel;

@interface AMPAvatarStackLockup : AMPBindableView {
    unsigned long long _size;
}

@property (retain, nonatomic) NSView *avatarContainer;
@property (retain, nonatomic) NSTextField *displayLabel;
@property (retain, nonatomic) NSLayoutConstraint *labelXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelTouchConstraint;
@property (nonatomic) long long rolledIndex;
@property (retain, nonatomic) id<AMPAvatarStackLockupModel> viewModel;
@property (nonatomic) unsigned long long countClamp;
@property (nonatomic) unsigned long long avatarSize;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *avatarCenterAnchor;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *avatarBottomAnchor;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *labelBaselineAnchor;

+ (id)keyPathsForValuesInvalidatingConstraints;
+ (id)lockup;
+ (id)keyPathsForValuesAffectingLabelText;

- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void)mouseExited:(id)a0;
- (double)firstBaselineOffsetFromTop;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)init;
- (id)initWithSize:(unsigned long long)a0;
- (void)mouseMoved:(id)a0;
- (id)labelText;
- (double)currentAvatarHeight;
- (double)currentAvatarOffset;
- (double)currentBorderSize;
- (unsigned long long)numAvatars;
- (void)updateRolledIndex:(long long)a0;

@end
