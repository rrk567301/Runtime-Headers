@class NSString;

@interface ASCIconOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *baseImageName;
@property (readonly, copy, nonatomic) NSString *animationName;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageNameForSize:(id)a0;
- (id)initWithBaseImageName:(id)a0 animationName:(id)a1;
- (char)isIcon;

@end
