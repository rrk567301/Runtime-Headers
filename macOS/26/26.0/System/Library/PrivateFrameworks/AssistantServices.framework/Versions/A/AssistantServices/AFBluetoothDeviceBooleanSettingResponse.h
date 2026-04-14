@interface AFBluetoothDeviceBooleanSettingResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long value;
@property (readonly, nonatomic) long long status;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(long long)a0 status:(long long)a1;

@end
