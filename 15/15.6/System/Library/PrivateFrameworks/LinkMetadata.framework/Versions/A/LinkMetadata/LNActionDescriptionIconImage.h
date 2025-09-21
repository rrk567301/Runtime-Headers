@class LNImage;

@interface LNActionDescriptionIconImage : LNActionDescriptionIcon

@property (readonly, copy, nonatomic) LNImage *image;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;

@end
