@class NSString, NSDictionary;

@interface CFXRemoteFunctionDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSDictionary *functionConstantValues;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)stableHashForDictionary:(id)a0;

@end
