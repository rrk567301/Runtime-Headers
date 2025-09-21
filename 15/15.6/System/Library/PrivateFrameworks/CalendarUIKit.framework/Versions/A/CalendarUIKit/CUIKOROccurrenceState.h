@class NSFont, NSString, NSAttributedString, NSArray, EKEvent, NSColor, NSImage, NSNumber, NSCache;

@interface CUIKOROccurrenceState : NSObject <CUIKMutableDayOccurrenceState, CUIKOROccurrenceState> {
    char _isPerformingChanges;
    char _didChange;
}

@property (class, readonly, nonatomic) NSCache *locationCache;
@property (class, readonly, nonatomic) NSCache *languageAwareInsetsCache;
@property (class, readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } defaultPadding;

@property (nonatomic) char occurrenceIsFirstVisibleDayOfEvent;
@property (nonatomic) char isSelected;
@property (nonatomic) char isDimmed;
@property (nonatomic) char usesSmallText;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) NSColor *displayColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } estimatedTextFrame;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) double visibleHeight;
@property (nonatomic) long long birthdayCount;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) long long horizontalSizeClass;
@property (retain, nonatomic) NSNumber *allDayOverride;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char isTentative;
@property (readonly, nonatomic) char needsReply;
@property (readonly, nonatomic) char isAllDay;
@property (readonly, nonatomic) char isCancelled;
@property (readonly, nonatomic) char isDeclined;
@property (readonly, nonatomic) char hasNewTimeProposed;
@property (readonly, nonatomic) char isBirthday;
@property (readonly, nonatomic) char isReminder;
@property (readonly, nonatomic) int reminderStackDepth;
@property (readonly, nonatomic) char isCompleted;
@property (readonly, nonatomic) char drawReminderAsEditable;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) char hidesTime;
@property (readonly, nonatomic) NSAttributedString *location;
@property (readonly, nonatomic) NSString *moreText;
@property (readonly, nonatomic) NSColor *titleTextColor;
@property (readonly, nonatomic) NSColor *timeTextColor;
@property (readonly, nonatomic) NSColor *locationTextColor;
@property (readonly, nonatomic) NSColor *moreTextColor;
@property (readonly, nonatomic) NSColor *strikethroughColor;
@property (readonly, nonatomic) NSColor *baseColor;
@property (readonly, nonatomic) NSColor *colorBarColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textSpace;
@property (readonly, nonatomic) double minimumNaturalHeightAllText;
@property (readonly, nonatomic) double enoughHeightForOneLine;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } languageAwareInsets;
@property (readonly, nonatomic) char requiresLanguageAwarePadding;
@property (readonly, nonatomic) double totalLanguageAwareHeightPadding;
@property (readonly, nonatomic) NSImage *leadingIcon;
@property (readonly, nonatomic) NSArray *trailingIcons;
@property (readonly, nonatomic) NSFont *primaryTextFont;
@property (readonly, nonatomic) NSFont *secondaryTextFont;
@property (readonly, nonatomic) unsigned long long fontCompressionDegree;
@property (readonly, nonatomic) NSString *locationImageName;
@property (retain, nonatomic) EKEvent *occurrence;
@property (retain, nonatomic) NSArray *occurrences;
@property (nonatomic) char isProposedTime;
@property (nonatomic) char isMiniPreviewInEventDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearLocationCache;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultMarginFromEKDayOccurrenceView;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultPaddingFromEKDayOccurrenceView;
+ (double)enoughHeightForOneLineForEvent:(id)a0 usingSmallText:(char)a1 sizeClass:(long long)a2;
+ (id)tallCharacterSetCache;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)status;
- (void)performChanges:(id /* block */)a0;
- (char)isReminderStack;
- (id)_leadingSymbolSizeConfigurationForReminder:(char)a0;
- (void)_location:(id *)a0 locationImageName:(id *)a1;
- (void)performChangesWithState:(id)a0;
- (id)primaryTextFontBold:(char)a0;
- (id)primaryTextFontNonBold;
- (id)reminderIcon;
- (id)secondaryTitleTextColor;
- (id)trailingIconsColor;

@end
