@class NSString, WFEncodedTypedValue;

@interface WFParameterKeyValuePair : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterKey;
@property (readonly, nonatomic) WFEncodedTypedValue *parameterValue;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithParameterKey:(id)a0 parameterValue:(id)a1;

@end
