@class NSString;

@interface MRGroupSessionHostInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned char routeType;
@property (readonly, nonatomic) NSString *localizedSessionName;
@property (readonly, nonatomic, getter=isLockScreenAffordanceAllowed) BOOL lockScreenAffordanceAllowed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRouteType:(unsigned char)a0 displayName:(id)a1;

@end
