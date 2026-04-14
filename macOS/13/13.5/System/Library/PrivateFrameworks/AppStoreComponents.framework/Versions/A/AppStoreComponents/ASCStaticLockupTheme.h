@class NSString, NSColor;

@interface ASCStaticLockupTheme : NSObject <ASCLockupTheme, NSCopying>

@property (copy, nonatomic) NSString *titleTextStyle;
@property (nonatomic) double titleFontWeight;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (nonatomic) double subtitleFontWeight;
@property (copy, nonatomic) NSString *headingTextStyle;
@property (nonatomic) double headingFontWeight;
@property (readonly, nonatomic) NSColor *titleTextColor;
@property (readonly, nonatomic) NSColor *subtitleTextColor;
@property (readonly, nonatomic) NSColor *headingTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)applyToLockupContentView:(id)a0 compatibleWithTraitCollection:(id)a1;
- (id)headingFontCompatibleWithTraitCollection:(id)a0;
- (id)initWithTitleTextColor:(id)a0 titleTextStyle:(id)a1 titleFontWeight:(double)a2 subtitleTextColor:(id)a3 subtitleTextStyle:(id)a4 subtitleFontWeight:(double)a5 headingTextColor:(id)a6 headingTextStyle:(id)a7 headingFontWeight:(double)a8;
- (id)subtitleFontCompatibleWithTraitCollection:(id)a0;
- (id)titleFontCompatibleWithTraitCollection:(id)a0;

@end
