@class NSURL;

@interface PFPosterMediaURLImage : PFPosterMedia

@property (retain, nonatomic) NSURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageAtURL:(id)a0;

@end
