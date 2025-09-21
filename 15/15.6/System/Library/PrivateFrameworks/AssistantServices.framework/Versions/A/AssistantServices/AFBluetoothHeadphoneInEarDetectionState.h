@interface AFBluetoothHeadphoneInEarDetectionState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) long long primaryEarbudSide;
@property (readonly, nonatomic) long long primaryInEarStatus;
@property (readonly, nonatomic) long long secondaryInEarStatus;

+ (id)newWithBuilder:(id /* block */)a0;
+ (void)decodeFromNotifyState:(unsigned long long)a0 withCompletion:(id /* block */)a1;
+ (unsigned long long)encodeForBTAddress:(id)a0 headphoneInEarDetectionStateDidChangeFrom:(id)a1 to:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithIsEnabled:(char)a0 primaryEarbudSide:(long long)a1 primaryInEarStatus:(long long)a2 secondaryInEarStatus:(long long)a3;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
