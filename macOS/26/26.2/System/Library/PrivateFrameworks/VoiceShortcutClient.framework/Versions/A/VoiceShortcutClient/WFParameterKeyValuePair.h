@class NSString, WFEncodedTypedValue;

@interface WFParameterKeyValuePair : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterKey;
@property (readonly, nonatomic) WFEncodedTypedValue *parameterValue;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameterKey:(id)a0 parameterValue:(id)a1;

@end
