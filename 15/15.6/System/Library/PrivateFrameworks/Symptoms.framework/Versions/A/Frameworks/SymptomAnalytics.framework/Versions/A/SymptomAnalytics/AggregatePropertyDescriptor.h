@class NSString, NSExpression;

@interface AggregatePropertyDescriptor : NSCoder <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSExpression *expression;
@property (readonly, nonatomic) unsigned long long resultType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 expression:(id)a1 resultType:(unsigned long long)a2;

@end
