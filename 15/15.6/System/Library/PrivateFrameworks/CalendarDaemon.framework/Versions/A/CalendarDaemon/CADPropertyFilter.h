@class NSString, NSDate;

@interface CADPropertyFilter : CADFilter

@property (readonly, nonatomic) long long property;
@property (readonly, nonatomic) long long comparison;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) char isString;
@property (readonly, nonatomic) char isInteger;
@property (readonly, nonatomic) char isDate;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)validate;
- (id)initWithProperty:(long long)a0 comparison:(long long)a1 dateValue:(id)a2;
- (id)initWithProperty:(long long)a0 comparison:(long long)a1 integerValue:(long long)a2;
- (id)initWithProperty:(long long)a0 comparison:(long long)a1 stringValue:(id)a2;
- (char)applicableToEntityType:(int)a0;
- (id)extendWhereClause:(id)a0 usingOperation:(long long)a1 withValues:(id)a2 andTypes:(id)a3;
- (char)validateWithRequiredPropertyType:(int)a0;

@end
