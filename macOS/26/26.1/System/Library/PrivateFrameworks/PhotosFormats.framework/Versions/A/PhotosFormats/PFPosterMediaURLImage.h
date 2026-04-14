@class NSURL;

@interface PFPosterMediaURLImage : PFPosterMedia

@property (retain, nonatomic) NSURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithImageAtURL:(id)a0;

@end
