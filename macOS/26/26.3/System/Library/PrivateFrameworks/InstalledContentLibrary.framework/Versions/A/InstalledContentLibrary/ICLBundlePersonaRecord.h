@class NSURL, NSDictionary;

@interface ICLBundlePersonaRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *dataContainerURL;
@property (copy, nonatomic) NSDictionary *groupContainerURLs;
@property (copy, nonatomic) NSDictionary *environmentVariables;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
