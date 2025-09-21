@class NSString;

@interface MSVArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *backgroundColorHex;
@property (retain, nonatomic) NSString *primaryTextColorHex;
@property (retain, nonatomic) NSString *secondaryTextColorHex;
@property (retain, nonatomic) NSString *tertiaryTextColorHex;
@property (readonly, nonatomic, getter=isBackgroundColorLight) char backgroundColorLight;
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) char primaryTextColorLight;
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) char secondaryTextColorLight;
@property (nonatomic, getter=isTertiaryTextColorLight) char tertiaryTextColorLight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_copyWithClass:(Class)a0;

@end
