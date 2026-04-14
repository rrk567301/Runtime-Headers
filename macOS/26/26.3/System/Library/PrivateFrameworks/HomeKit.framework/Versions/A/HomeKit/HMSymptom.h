@class NSDictionary;

@interface HMSymptom : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) NSDictionary *infoDictionary;

- (id)initWithType:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 infoDictionary:(id)a1;

@end
