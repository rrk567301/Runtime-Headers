@class NSString, NSColor;

@interface ASCLockupTheme : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *titleTextStyle;
@property (nonatomic) double titleFontWeight;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (nonatomic) double subtitleFontWeight;
@property (copy, nonatomic) NSString *headingTextStyle;
@property (nonatomic) double headingFontWeight;
@property (readonly, nonatomic) NSColor *titleTextColor;
@property (readonly, nonatomic) NSColor *subtitleTextColor;
@property (readonly, nonatomic) NSColor *headingTextColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitleTextColor:(id)a0 titleTextStyle:(id)a1 titleFontWeight:(double)a2 subtitleTextColor:(id)a3 subtitleTextStyle:(id)a4 subtitleFontWeight:(double)a5 headingTextColor:(id)a6 headingTextStyle:(id)a7 headingFontWeight:(double)a8;
- (id)titleFontCompatibleWithTraitCollection:(id)a0;
- (id)subtitleFontCompatibleWithTraitCollection:(id)a0;
- (id)headingFontCompatibleWithTraitCollection:(id)a0;

@end
