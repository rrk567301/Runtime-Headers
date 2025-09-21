@class NSString, NSUUID, NSDate;

@interface CHSRemoteDevice : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSUUID *relationshipID;
@property (readonly, copy, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) long long currentSupportedVersion;
@property (readonly, nonatomic) long long minSupportedVersion;
@property (readonly, nonatomic) char isPossibleSource;
@property (readonly, nonatomic) long long pairingState;
@property (readonly, copy, nonatomic) NSDate *lastConnectionDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithDevice:(id)a0;
- (id)initWithName:(id)a0 relationshipID:(id)a1 deviceID:(id)a2 currentSupportedVersion:(long long)a3 minSupportedVersion:(long long)a4 isPossibleSource:(char)a5 pairingState:(long long)a6 lastConnectionDate:(id)a7;

@end
