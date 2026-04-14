@class NSNumber;

@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *currentValue;
@property (copy, nonatomic) NSNumber *overrideValue;
@property (readonly, nonatomic) long long sourceType;

+ (id)localDeviceSource;
+ (id)staticSourceWithValue:(id)a0;
+ (id)sourceWithUserIdentity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
