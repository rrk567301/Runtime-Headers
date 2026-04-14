@class NSString;

@interface ASCIconTextOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *baseImageName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *animationName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isTextOnly;
- (id)imageNameForSize:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 imageName:(id)a2 animationName:(id)a3;
- (BOOL)isIconOnly;
- (BOOL)isTextAndIcon;

@end
