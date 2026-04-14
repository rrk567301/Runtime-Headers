@class NSArray;

@interface TPSContextualClientContextEvent : TPSContextualEvent

@property (copy, nonatomic) NSArray *conditions;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)clientContextKeys;

@end
