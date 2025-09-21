@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) char isUserCentric;
@property (nonatomic) char isEphemeral;
@property (nonatomic) char sensitiveContents;

+ (id)ephemeralKeyPathWithKey:(id)a0;
+ (id)keyPathWithKey:(id)a0;
+ (id)keyPathWithKey:(id)a0 isUserCentric:(char)a1;
+ (id)remoteKeyPathForKeyPath:(id)a0 forDeviceID:(id)a1;
+ (id)remotekeyPathForKeyPath:(id)a0 forDevice:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0 forDevice:(unsigned long long)a1 isUserCentric:(char)a2 isEphemeral:(char)a3;
- (id)initWithKey:(id)a0 forDeviceID:(id)a1 isUserCentric:(char)a2 isEphemeral:(char)a3;
- (char)isMultiDeviceKeyPath;

@end
