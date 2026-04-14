@class NSString, NSDictionary;

@interface SHArtwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *URLString;
@property (readonly) NSDictionary *artworkDictionary;
@property (readonly) long long maximumWidth;
@property (readonly) long long maximumHeight;

+ (id)urlWithURLTemplate:(id)a0 width:(long long)a1 height:(long long)a2 cropStyle:(id)a3 format:(id)a4;
+ (BOOL)validateDictionary:(id)a0 error:(id *)a1;

- (id)initWithURL:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (struct CGColor { } *)newBackgroundColor;
- (BOOL)isEqualArtwork:(id)a0;
- (id)URLWithWidth:(long long)a0 height:(long long)a1;
- (id)URLWithWidth:(long long)a0 height:(long long)a1 cropStyle:(id)a2 format:(id)a3;
- (id)aspectRatioPreservingURLWithWidth:(long long)a0 height:(long long)a1;
- (struct CGColor { } *)newColorWithKind:(id)a0;
- (struct CGColor { } *)newPrimaryTextColor;
- (struct CGColor { } *)newQuarternaryTextColor;
- (struct CGColor { } *)newSecondaryTextColor;
- (struct CGColor { } *)newTertiaryTextColor;
- (struct CGSize { double x0; double x1; })targetArtworkImageSizeFromTargetWidth:(long long)a0 height:(long long)a1 aspectRatio:(double)a2;

@end
