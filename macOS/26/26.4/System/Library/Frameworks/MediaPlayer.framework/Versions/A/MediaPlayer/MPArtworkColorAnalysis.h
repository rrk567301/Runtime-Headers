@class NSColor, NSArray, NSNumber;

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *primaryTextColor;
@property (retain, nonatomic) NSColor *secondaryTextColor;
@property (retain, nonatomic) NSColor *tertiaryTextColor;
@property (retain, nonatomic) NSColor *quaternaryTextColor;
@property (retain, nonatomic) NSColor *gradientColor;
@property (retain, nonatomic) NSArray *gradientTextColors;
@property (retain, nonatomic) NSNumber *gradientColorStartPosition;
@property (retain, nonatomic) NSNumber *gradientColorEndPosition;
@property (readonly, nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;
@property (readonly, nonatomic, getter=isTertiaryTextColorLight) BOOL tertiaryTextColorLight;

+ (id)translateFromMSVColorAnalysis:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_copyWithClass:(Class)a0;
- (id)translateToMSVColorAnalysis;

@end
