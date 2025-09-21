@class NSString;

@interface INHomeAttribute : NSObject <INHomeAttributeExport, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) long long valueType;
@property (readonly) char boolValue;
@property (readonly) double doubleValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 boolValue:(char)a1;
- (id)initWithType:(long long)a0 doubleValue:(double)a1;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithType:(long long)a0 valueType:(long long)a1 boolValue:(char)a2 doubleValue:(double)a3 stringValue:(id)a4;

@end
