@class LNImage;

@interface LNActionDescriptionIconImage : LNActionDescriptionIcon

@property (readonly, copy, nonatomic) LNImage *image;

+ (BOOL)supportsSecureCoding;

- (id)initWithImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
