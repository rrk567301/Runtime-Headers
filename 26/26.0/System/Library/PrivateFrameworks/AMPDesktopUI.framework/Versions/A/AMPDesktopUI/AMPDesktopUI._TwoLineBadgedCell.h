@class NSImage;

@interface AMPDesktopUI._TwoLineBadgedCell : AMPDesktopUI._TwoLineCell

@property (nonatomic, weak) void /* function */ badge;
@property (nonatomic, readonly) NSImage *badgeImage;

+ (id)keyPathsForValuesAffectingBadgeImage;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
