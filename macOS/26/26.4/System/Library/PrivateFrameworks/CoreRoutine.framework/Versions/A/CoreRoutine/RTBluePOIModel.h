@class NSUUID, NSString, NSDictionary;

@interface RTBluePOIModel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSDictionary *featureToHashedApMapping;
@property (readonly, nonatomic) NSString *featureToHashedApMappingDataURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 featureToHashedApMapping:(id)a1 featureToHashedApMappingDataURL:(id)a2 url:(id)a3;

@end
