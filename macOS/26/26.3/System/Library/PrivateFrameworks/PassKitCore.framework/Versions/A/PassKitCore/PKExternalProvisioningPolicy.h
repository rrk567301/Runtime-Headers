@class NSString, NSDictionary;

@interface PKExternalProvisioningPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *deviceLimits;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToExternalProvisioningPolicy:(id)a0;

@end
