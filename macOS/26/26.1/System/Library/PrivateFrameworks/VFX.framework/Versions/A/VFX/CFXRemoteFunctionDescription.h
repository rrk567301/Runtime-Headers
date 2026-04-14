@class NSString, NSDictionary;

@interface CFXRemoteFunctionDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSDictionary *functionConstantValues;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)stableHashForDictionary:(id)a0;

@end
