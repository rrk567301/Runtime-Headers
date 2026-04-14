@class NSAttributedString;

@interface AMPDesktopUI._ContentRatingTextCell : AMPDesktopUI._PlainTextCell

@property (nonatomic, readonly) NSAttributedString *attributedString;

+ (id)keyPathsForValuesAffectingAttributedString;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
