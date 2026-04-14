@class NSURL;

@interface PFPosterMediaURLImage : PFPosterMedia

@property (retain, nonatomic) NSURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithImageAtURL:(id)a0;

@end
