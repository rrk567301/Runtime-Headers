@class NSMutableArray, NAIdentity;

@interface NAIdentityBuilder : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *characteristics;
@property (retain, nonatomic) NAIdentity *builtIdentity;

+ (id)buildPointerIdentity;
+ (id)builderWithIdentity:(id)a0;
+ (id)na_identity;
+ (id)builder;

- (id)appendCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendDoubleCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (BOOL)isObject:(id)a0 equalToObject:(id)a1;
- (id)appendCharacteristic:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appendIntegerCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendRangeCharacteristic:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)appendFloatCharacteristic:(id /* block */)a0;
- (id)build;
- (id)appendIntegerCharacteristic:(id /* block */)a0;
- (id)appendCharacteristic:(id /* block */)a0 withRole:(long long)a1 comparatorBlock:(id /* block */)a2 hashBlock:(id /* block */)a3;
- (id)appendFloatCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)appendDoubleCharacteristic:(id /* block */)a0;
- (id)initWithIdentity:(id)a0;
- (id)appendRangeCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendUnsignedIntegerCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (unsigned long long)hashOfObject:(id)a0;
- (id)appendUnsignedIntegerCharacteristic:(id /* block */)a0;

@end
