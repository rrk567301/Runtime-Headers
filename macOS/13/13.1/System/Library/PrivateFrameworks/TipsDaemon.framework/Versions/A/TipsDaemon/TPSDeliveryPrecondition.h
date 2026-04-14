@class NSArray;

@interface TPSDeliveryPrecondition : TPSSerializableObject

@property (nonatomic) long long joinType;
@property (copy, nonatomic) NSArray *conditions;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
