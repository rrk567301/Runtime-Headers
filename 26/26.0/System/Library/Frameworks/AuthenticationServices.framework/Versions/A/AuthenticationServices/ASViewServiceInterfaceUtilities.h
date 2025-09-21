@class NSColor, NSImageSymbolConfiguration, NSFont;

@interface ASViewServiceInterfaceUtilities : NSObject

@property (class, readonly, nonatomic) NSColor *iconBorderColor;
@property (class, readonly, nonatomic) double iconBorderWidth;
@property (class, readonly, nonatomic) NSFont *headerTitleFont;
@property (class, readonly, nonatomic) NSColor *headerTitleColor;
@property (class, readonly, nonatomic) NSFont *headerMessageFont;
@property (class, readonly, nonatomic) NSColor *headerMessageColor;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } headerIconSize;
@property (class, readonly, nonatomic) double headerIconCornerRadius;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } headerBadgeIconSize;
@property (class, readonly, nonatomic) double headerBadgeIconCornerRadius;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } headerSmallBadgeIconSize;
@property (class, readonly, nonatomic) double headerSmallBadgeIconCornerRadius;
@property (class, readonly, nonatomic) NSFont *cellTitleFont;
@property (class, readonly, nonatomic) NSColor *cellTitleColor;
@property (class, readonly, nonatomic) NSFont *cellSubtitleFont;
@property (class, readonly, nonatomic) NSColor *cellSubtitleColor;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } cellIconSize;
@property (class, readonly, nonatomic) NSColor *cellIconTintColor;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *cellIconPasskeySymbolConfiguration;
@property (class, readonly, nonatomic) double continueButtonTitleMargin;
@property (class, readonly, nonatomic) double continueButtonHeight;

+ (double)_iconCornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;

@end
