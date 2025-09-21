@class BSColor, NSString, CHSFontSpecification;

@interface CHSInlineTextParameters : NSObject <BSXPCSecureCoding, NSCopying>

@property (copy, nonatomic) CHSFontSpecification *fontSpecification;
@property (copy, nonatomic) BSColor *foregroundColor;
@property (copy, nonatomic) BSColor *foregroundDateColor;
@property (nonatomic) char allowsNonSystemForegroundColors;
@property (nonatomic) unsigned long long horizontalAlignment;
@property (nonatomic) char showsDateAlongsideText;
@property (copy, nonatomic) NSString *dateFormat;
@property (nonatomic) char ignoresRTL;
@property (nonatomic) unsigned long long graphicAlignment;
@property (nonatomic) struct CGSize { double width; double height; } graphicMaxSize;
@property (nonatomic) unsigned long long symbolScale;
@property (nonatomic) char forceUppercase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)_effectiveDateFormat;
- (id)_initWithInlineTextProperties:(id)a0;

@end
