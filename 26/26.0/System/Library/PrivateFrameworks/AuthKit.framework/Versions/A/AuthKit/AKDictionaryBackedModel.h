@class NSDictionary;

@interface AKDictionaryBackedModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *values;
@property (readonly, nonatomic) NSDictionary *validationRequirements;

- (id)initWithValues:(id)a0;
- (id)objectForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0 as:(Class)a1;
- (id)parseValue:(id)a0 atKey:(id)a1;
- (id)validObjectForKey:(id)a0;

@end
