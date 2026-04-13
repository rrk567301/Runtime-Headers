@class NSColor;

@interface ASCOfferTheme : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCOfferTheme *loadingTheme;
@property (class, readonly) ASCOfferTheme *grayTheme;
@property (class, readonly) ASCOfferTheme *blueTheme;
@property (class, readonly) ASCOfferTheme *whiteTheme;
@property (class, readonly) ASCOfferTheme *adTheme;
@property (class, readonly) ASCOfferTheme *primaryTheme;
@property (class, readonly) ASCOfferTheme *secondaryTheme;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSColor *titleBackgroundColor;
@property (readonly, nonatomic) NSColor *titleTextColor;
@property (readonly, nonatomic) NSColor *titleTextDisabledColor;
@property (readonly, nonatomic) NSColor *subtitleTextColor;
@property (readonly, nonatomic) NSColor *iconTintColor;
@property (readonly, nonatomic) NSColor *progressColor;

+ (id)confirmationForTheme:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 subtitleTextColor:(id)a2 iconTintColor:(id)a3 progressColor:(id)a4;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 titleTextDisabledColor:(id)a2 subtitleTextColor:(id)a3 iconTintColor:(id)a4 progressColor:(id)a5;

@end
