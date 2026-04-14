@class NSTextField, NSView, _TtC12AMPDesktopUI16AMPArtworkLockup, NSStackView, BadgeStackLockup, KeyColorButton, NSButton, NSLayoutConstraint;
@protocol AMPAlbumHeaderLockupModel;

@interface AMPAlbumHeaderLockup : NSTableCellView {
    double _artworkAspect;
}

@property (retain, nonatomic) _TtC12AMPDesktopUI16AMPArtworkLockup *artworkView;
@property (retain, nonatomic) NSStackView *titleStack;
@property (retain, nonatomic) NSTextField *title1Field;
@property (retain, nonatomic) NSTextField *title2Field;
@property (retain, nonatomic) NSTextField *calloutField;
@property (retain, nonatomic) NSButton *settingsButton;
@property (retain, nonatomic) BadgeStackLockup *badges;
@property (retain, nonatomic) KeyColorButton *playButton;
@property (retain, nonatomic) KeyColorButton *shuffleButton;
@property (retain, nonatomic) KeyColorButton *downloadButton;
@property (retain, nonatomic) KeyColorButton *actionButton;
@property (retain, nonatomic) NSTextField *descriptionField;
@property (retain, nonatomic) NSView *descriptionContainer;
@property (retain, nonatomic) NSLayoutConstraint *artworkAspectConstraint;
@property (retain, nonatomic) id<AMPAlbumHeaderLockupModel> viewModel;
@property (readonly, nonatomic) double titleVisualOffset;
@property (nonatomic) double artworkAspectRatio;

+ (id)lockup;
+ (id)keyPathsForValuesAffectingDescriptionIsVisible;
+ (id)keyPathsForValuesAffectingDescriptionPlaceholder;
+ (id)keyPathsForValuesAffectingDownloadProgress;
+ (id)keyPathsForValuesAffectingDownloadState;
+ (id)keyPathsForValuesAffectingPlayButtonTitle;
+ (id)keyPathsForValuesAffectingSettingsButtonShouldBeHidden;
+ (id)keyPathsForValuesAffectingSubTitleShouldBeHidden;
+ (id)keyPathsForValuesAffectingSubTitleString;
+ (id)keyPathsForValuesAffectingTitle1AdornedString;
+ (id)keyPathsForValuesAffectingViewModel;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (double)downloadProgress;
- (BOOL)isFlipped;
- (long long)downloadState;
- (id)subTitleString;
- (id)playButtonTitle;
- (BOOL)descriptionIsVisible;
- (id)descriptionPlaceholder;
- (void)doActionMenuButton:(id)a0;
- (void)doReflectEditSettingsAction:(id)a0;
- (void)setTitle1AdornedString:(id)a0;
- (BOOL)settingsButtonShouldBeHidden;
- (id)settingsButtonTitle;
- (BOOL)subTitleShouldBeHidden;
- (id)title1AdornedString;

@end
