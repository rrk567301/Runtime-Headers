@class NSURL, NSDictionary;

@interface ICLBundlePersonaRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *dataContainerURL;
@property (copy, nonatomic) NSDictionary *groupContainerURLs;
@property (copy, nonatomic) NSDictionary *environmentVariables;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
