@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char enabled;
@property (nonatomic) long long type;
@property (nonatomic) char isEmergencyText;
@property (nonatomic) char isEmergencySetup;
@property (nonatomic) long long state;
@property (readonly, nonatomic) char isStewieActive;

+ (id)convertFromEmergencyMode:(const struct EmergencyMode { int x0; int x1; int x2; int x3; BOOL x4; BOOL x5; } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabled:(char)a0 type:(long long)a1 isEmergencyText:(char)a2;
- (id)initWithEnabled:(char)a0 type:(long long)a1 isEmergencyText:(char)a2 isEmergencySetup:(char)a3;
- (id)initWithEnabled:(char)a0 type:(long long)a1 isEmergencyText:(char)a2 isEmergencySetup:(char)a3 isStewieActive:(char)a4;
- (id)initWithEnabled:(char)a0 type:(long long)a1 isEmergencyText:(char)a2 isEmergencySetup:(char)a3 isStewieActive:(char)a4 state:(long long)a5;
- (id)initWithEnabled:(char)a0 type:(long long)a1 isEmergencyText:(char)a2 isEmergencySetup:(char)a3 state:(long long)a4;
- (char)isEqualToCTEmergencyMode:(id)a0;

@end
