@class NSMutableArray, NAIdentity;

@interface NAIdentityBuilder : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *characteristics;
@property (retain, nonatomic) NAIdentity *builtIdentity;

+ (id)builder;
+ (id)buildPointerIdentity;
+ (id)builderWithIdentity:(id)a0;
+ (id)na_identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)build;
- (id)initWithIdentity:(id)a0;
- (id)appendCharacteristic:(id /* block */)a0;
- (id)appendCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendCharacteristic:(id /* block */)a0 withRole:(long long)a1 comparatorBlock:(id /* block */)a2 hashBlock:(id /* block */)a3;
- (id)appendDoubleCharacteristic:(id /* block */)a0;
- (id)appendDoubleCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendFloatCharacteristic:(id /* block */)a0;
- (id)appendFloatCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendIntegerCharacteristic:(id /* block */)a0;
- (id)appendIntegerCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendRangeCharacteristic:(id /* block */)a0;
- (id)appendRangeCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendUnsignedIntegerCharacteristic:(id /* block */)a0;
- (id)appendUnsignedIntegerCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (unsigned long long)hashOfObject:(id)a0;
- (char)isObject:(id)a0 equalToObject:(id)a1;

@end
