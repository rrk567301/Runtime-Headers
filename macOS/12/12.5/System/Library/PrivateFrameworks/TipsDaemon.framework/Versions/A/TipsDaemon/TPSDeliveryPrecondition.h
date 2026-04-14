@class NSArray;

@interface TPSDeliveryPrecondition : TPSSerializableObject

@property (nonatomic) long long joinType;
@property (copy, nonatomic) NSArray *conditions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
