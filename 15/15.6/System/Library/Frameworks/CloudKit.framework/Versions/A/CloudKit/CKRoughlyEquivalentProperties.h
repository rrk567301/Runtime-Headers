@class NSDictionary;

@interface CKRoughlyEquivalentProperties : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionary;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
