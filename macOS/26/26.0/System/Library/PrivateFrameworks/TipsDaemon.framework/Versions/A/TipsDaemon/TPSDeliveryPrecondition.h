@class NSArray, NSString;

@interface TPSDeliveryPrecondition : TPSSerializableObject

@property (nonatomic) long long statusType;
@property (nonatomic) long long joinType;
@property (copy, nonatomic) NSArray *conditions;
@property (copy, nonatomic) NSString *label;

- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)conditionsForType:(long long)a0;
- (id)initWithDictionary:(id)a0 fallbackId:(id)a1;
- (id)registrableEvents;

@end
