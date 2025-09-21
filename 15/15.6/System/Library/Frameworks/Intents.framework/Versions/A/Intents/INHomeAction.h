@class NSString;

@interface INHomeAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) long long valueType;
@property (readonly) char boolValue;
@property (readonly) double doubleValue;
@property (readonly) long long integerValue;
@property (readonly, copy) NSString *stringValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 boolValue:(char)a1;
- (id)initWithType:(long long)a0 doubleValue:(double)a1;
- (id)initWithType:(long long)a0 integerValue:(long long)a1;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithType:(long long)a0 valueType:(long long)a1 boolValue:(char)a2 doubleValue:(double)a3 integerValue:(long long)a4 stringValue:(id)a5;

@end
