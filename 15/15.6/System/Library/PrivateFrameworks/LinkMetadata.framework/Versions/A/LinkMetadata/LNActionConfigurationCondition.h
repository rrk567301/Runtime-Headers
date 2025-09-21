@class NSString, LNValue;

@interface LNActionConfigurationCondition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, nonatomic) long long comparisonOperator;
@property (readonly, nonatomic) LNValue *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithComparisonOperator:(long long)a0 widgetFamilies:(id)a1;
- (id)initWithComparisonOperator:(long long)a0 widgetFamily:(id)a1;
- (id)initWithParameterIdentifier:(id)a0 comparisonOperator:(long long)a1 value:(id)a2;

@end
