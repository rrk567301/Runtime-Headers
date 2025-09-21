@class NSString;

@interface TPSCapability : TPSSerializableObject

@property (nonatomic) long long joinType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) id value;

- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
