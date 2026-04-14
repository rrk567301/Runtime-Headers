@class NSData, NSDictionary, NIDiscoveryToken;

@interface NINearbyAccessoryConfiguration : NIConfiguration {
    NSData *_rawData;
}

@property (readonly, copy) NSData *accessoryConfigData;
@property (copy) NSDictionary *debugParameters;
@property (readonly, copy, nonatomic) NIDiscoveryToken *accessoryDiscoveryToken;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)descriptionInternal;

@end
