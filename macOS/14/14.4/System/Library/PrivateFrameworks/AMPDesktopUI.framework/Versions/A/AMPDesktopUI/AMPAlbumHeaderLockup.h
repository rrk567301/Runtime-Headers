@class NSTextField, NSView, _TtC12AMPDesktopUI16AMPArtworkLockup, NSStackView, BadgeStackLockup, _AMPLimitedLineButton, AMPAvatarStackLockup, NSButton, KeyColorButton, NSLayoutConstraint;
@protocol AMPAlbumHeaderLockupModel;

@interface AMPAlbumHeaderLockup : NSTableCellView {
    double _artworkAspect;
}

@property (retain, nonatomic) _TtC12AMPDesktopUI16AMPArtworkLockup *artworkView;
@property (retain, nonatomic) NSStackView *titleStack;
@property (retain, nonatomic) NSTextField *title1Field;
@property (retain, nonatomic) NSTextField *title2Field;
@property (retain, nonatomic) _AMPLimitedLineButton *title2Button;
@property (retain, nonatomic) NSTextField *calloutField;
@property (retain, nonatomic) AMPAvatarStackLockup *avatarStack;
@property (retain, nonatomic) NSButton *settingsButton;
@property (retain, nonatomic) BadgeStackLockup *badges;
@property (retain, nonatomic) KeyColorButton *playButton;
@property (retain, nonatomic) KeyColorButton *shuffleButton;
@property (retain, nonatomic) KeyColorButton *downloadButton;
@property (retain, nonatomic) KeyColorButton *actionButton;
@property (retain, nonatomic) NSButton *publishCheckbox;
@property (retain, nonatomic) NSTextField *descriptionField;
@property (retain, nonatomic) NSView *descriptionContainer;
@property (retain, nonatomic) NSLayoutConstraint *artworkAspectConstraint;
@property (retain, nonatomic) id<AMPAlbumHeaderLockupModel> viewModel;
@property (readonly, nonatomic) double titleVisualOffset;
@property (nonatomic) double artworkAspectRatio;

+ (id)lockup;
+ (id)keyPathsForValuesAffectingAvatarsShouldBeHidden;
+ (id)keyPathsForValuesAffectingDescriptionIsVisible;
+ (id)keyPathsForValuesAffectingDescriptionPlaceholder;
+ (id)keyPathsForValuesAffectingDownloadProgress;
+ (id)keyPathsForValuesAffectingDownloadState;
+ (id)keyPathsForValuesAffectingPlayButtonTitle;
+ (id)keyPathsForValuesAffectingSettingsButtonShouldBeHidden;
+ (id)keyPathsForValuesAffectingShowCollabActivationButton;
+ (id)keyPathsForValuesAffectingShowCollabManagementButton;
+ (id)keyPathsForValuesAffectingSubTitleShouldBeHidden;
+ (id)keyPathsForValuesAffectingSubTitleString;
+ (id)keyPathsForValuesAffectingTitle1AdornedString;
+ (id)keyPathsForValuesAffectingViewModel;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (double)downloadProgress;
- (BOOL)isFlipped;
- (long long)downloadState;
- (id)subTitleString;
- (unsigned long long)currCollabState;
- (id)playButtonTitle;
- (BOOL)avatarsShouldBeHidden;
- (BOOL)descriptionIsVisible;
- (id)descriptionPlaceholder;
- (void)doActionMenuButton:(id)a0;
- (void)doCollabManagementButton:(id)a0;
- (void)doDownloadButton:(id)a0;
- (void)doPlayButton:(id)a0;
- (void)doPublishOnProfileCheck:(id)a0;
- (void)doReflectEditSettingsAction:(id)a0;
- (void)doRefreshAction:(id)a0;
- (void)doShuffleButton:(id)a0;
- (void)doSubtitleLinkClicked:(id)a0;
- (void)setTitle1AdornedString:(id)a0;
- (BOOL)settingsButtonShouldBeHidden;
- (id)settingsButtonTitle;
- (BOOL)showCollabActivationButton;
- (BOOL)showCollabManagementButton;
- (BOOL)subTitleShouldBeHidden;
- (id)title1AdornedString;

@end
