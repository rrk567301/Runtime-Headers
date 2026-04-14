@class NSString, NSDictionary;

@interface SHArtwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *URLString;
@property (readonly) NSDictionary *artworkDictionary;
@property (readonly) long long maximumWidth;
@property (readonly) long long maximumHeight;

+ (id)urlWithURLTemplate:(id)a0 width:(long long)a1 height:(long long)a2;
+ (BOOL)validateDictionary:(id)a0 error:(id *)a1;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGColor { } *)newBackgroundColor;
- (id)URLWithWidth:(long long)a0 height:(long long)a1;
- (struct CGColor { } *)newColorWithKind:(id)a0;
- (struct CGColor { } *)newPrimaryTextColor;
- (struct CGColor { } *)newQuarternaryTextColor;
- (struct CGColor { } *)newSecondaryTextColor;
- (struct CGColor { } *)newTertiaryTextColor;

@end
