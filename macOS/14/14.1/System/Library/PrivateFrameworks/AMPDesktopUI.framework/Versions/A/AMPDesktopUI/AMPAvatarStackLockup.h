@class NSTextField, NSView, NSLayoutYAxisAnchor, NSLayoutConstraint;
@protocol AMPAvatarStackLockupModel;

@interface AMPAvatarStackLockup : NSView {
    unsigned long long _size;
}

@property (retain, nonatomic) NSView *avatarContainer;
@property (retain, nonatomic) NSTextField *displayLabel;
@property (retain, nonatomic) NSLayoutConstraint *labelXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelTouchConstraint;
@property (nonatomic) long long rolledIndex;
@property (retain, nonatomic) id<AMPAvatarStackLockupModel> viewModel;
@property (nonatomic) unsigned long long avatarSize;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *avatarCenterAnchor;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *avatarBottomAnchor;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *labelBaselineAnchor;

+ (id)keyPathsForValuesInvalidatingConstraints;
+ (id)lockup;
+ (id)keyPathsForValuesAffectingLabelText;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithSize:(unsigned long long)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)updateConstraints;
- (id)labelText;
- (double)currentAvatarHeight;
- (double)currentAvatarOffset;
- (void)updateRolledIndex:(long long)a0;

@end
