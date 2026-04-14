@class LNImage;

@interface LNActionDescriptionIconImage : LNActionDescriptionIcon

@property (readonly, copy, nonatomic) LNImage *image;

+ (BOOL)supportsSecureCoding;

- (id)initWithImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
