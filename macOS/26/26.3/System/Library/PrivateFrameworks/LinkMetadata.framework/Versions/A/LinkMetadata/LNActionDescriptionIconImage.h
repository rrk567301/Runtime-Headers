@class LNImage;

@interface LNActionDescriptionIconImage : LNActionDescriptionIcon

@property (readonly, copy, nonatomic) LNImage *image;

+ (BOOL)supportsSecureCoding;

- (id)initWithImage:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
