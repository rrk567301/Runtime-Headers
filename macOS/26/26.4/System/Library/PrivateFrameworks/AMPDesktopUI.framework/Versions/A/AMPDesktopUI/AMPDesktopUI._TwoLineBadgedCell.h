@class NSImage;

@interface AMPDesktopUI._TwoLineBadgedCell : AMPDesktopUI._TwoLineCell

@property (nonatomic, weak) void /* function */ badge;
@property (nonatomic, readonly) NSImage *badgeImage;

+ (id)keyPathsForValuesAffectingBadgeImage;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
