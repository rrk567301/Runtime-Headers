@class NSArray;

@interface TPSContextualClientContextEvent : TPSContextualEvent

@property (copy, nonatomic) NSArray *conditions;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)clientContextKeys;

@end
