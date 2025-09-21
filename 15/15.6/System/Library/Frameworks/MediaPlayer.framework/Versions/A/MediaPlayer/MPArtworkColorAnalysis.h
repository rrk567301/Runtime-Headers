@class NSColor;

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *primaryTextColor;
@property (retain, nonatomic) NSColor *secondaryTextColor;
@property (retain, nonatomic) NSColor *tertiaryTextColor;
@property (readonly, nonatomic, getter=isBackgroundColorLight) char backgroundColorLight;
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) char primaryTextColorLight;
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) char secondaryTextColorLight;
@property (readonly, nonatomic, getter=isTertiaryTextColorLight) char tertiaryTextColorLight;

+ (id)translateFromMSVColorAnalysis:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_copyWithClass:(Class)a0;
- (id)translateToMSVColorAnalysis;

@end
