@class NSString;

@interface ASCIconOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *baseImageName;
@property (readonly, copy, nonatomic) NSString *animationName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)imageNameForSize:(id)a0;
- (id)initWithBaseImageName:(id)a0 animationName:(id)a1;
- (BOOL)isIcon;

@end
