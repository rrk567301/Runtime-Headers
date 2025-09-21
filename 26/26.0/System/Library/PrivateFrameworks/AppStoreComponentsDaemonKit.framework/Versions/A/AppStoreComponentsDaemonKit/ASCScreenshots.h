@class ASCMediaPlatform, NSArray;

@interface ASCScreenshots : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ASCMediaPlatform *mediaPlatform;
@property (readonly, copy, nonatomic) NSArray *artwork;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArtwork:(id)a0 mediaPlatform:(id)a1;

@end
