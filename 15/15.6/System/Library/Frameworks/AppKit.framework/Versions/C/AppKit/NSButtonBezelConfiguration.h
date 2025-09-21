@class NSColor, NSAppearance;

@interface NSButtonBezelConfiguration : NSObject

@property (retain, nonatomic) NSAppearance *appearance;
@property (retain, nonatomic) NSColor *bezelTintColor;
@property (nonatomic) long long interactionState;
@property (nonatomic) long long presentationState;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) long long focusLocation;
@property (nonatomic) double backingScaleFactor;
@property (nonatomic) char usesTextAppearanceInToolbar;
@property (nonatomic) char prefersDefaultButtonAppearance;
@property (nonatomic) char drawWithLegacyFocus;
@property (nonatomic) char showsDisclosureChevron;
@property (nonatomic) char backgroundChangesWithState;
@property (nonatomic) char shouldDrawBezel;
@property (nonatomic) char hasExplicitMaterial;
@property (nonatomic) char isCheckboxOrRadio;
@property (nonatomic) char hasAlternateContent;
@property (nonatomic) char prefersAlternateContent;
@property (nonatomic) char inToolbar;
@property (readonly) char isBordered;
@property (readonly) char shouldDrawAsDefaultButton;
@property (readonly) char inTouchBar;

- (void).cxx_destruct;

@end
