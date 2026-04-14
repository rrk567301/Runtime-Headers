@class NSImage;

@interface AMPDesktopUI._FavoriteStateCell : AMPRolloverTableCell {
    void /* unknown type, empty encoding */ axFocusChangedNotification;
    void /* unknown type, empty encoding */ forceShowAreaOverride;
}

@property (nonatomic, weak) void /* function */ button;
@property (nonatomic, readonly) NSImage *favoriteImage;
@property (nonatomic, readonly) BOOL favoriteEnabled;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) BOOL rollover;
@property (nonatomic) BOOL isActuallyRolledOver;

+ (id)keyPathsForValuesAffectingFavoriteEnabled;
+ (id)keyPathsForValuesAffectingFavoriteImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)reflectAction:(id)a0;

@end
