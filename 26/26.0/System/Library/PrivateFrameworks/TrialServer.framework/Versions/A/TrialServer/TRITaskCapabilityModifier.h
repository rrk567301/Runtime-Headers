@interface TRITaskCapabilityModifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long add;
@property (readonly, nonatomic) unsigned long long remove;

+ (id)parseFromData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToModifier:(id)a0;
- (id)init;
- (unsigned long long)updateCapability:(unsigned long long)a0;
- (id)serialize;
- (id)asPersistedModifier;
- (id)description;
- (id)initWithAdd:(unsigned long long)a0 remove:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
