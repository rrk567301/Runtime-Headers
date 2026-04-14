@class NSUUID, NSString, NSDictionary;

@interface RTBluePOIModel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSDictionary *featureToHashedApMapping;
@property (readonly, nonatomic) NSString *featureToHashedApMappingDataURL;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 featureToHashedApMapping:(id)a1 featureToHashedApMappingDataURL:(id)a2 url:(id)a3;

@end
