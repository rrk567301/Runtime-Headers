@class NSString;

@interface PFAmbientPosterData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *associatedAssetCloudIdentifier;

+ (id)loadFromURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)saveToURL:(id)a0 error:(id *)a1;

@end
