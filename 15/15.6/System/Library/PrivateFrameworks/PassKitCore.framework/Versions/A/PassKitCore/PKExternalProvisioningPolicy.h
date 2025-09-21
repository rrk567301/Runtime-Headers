@class NSString, NSDictionary;

@interface PKExternalProvisioningPolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *deviceLimits;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToExternalProvisioningPolicy:(id)a0;

@end
