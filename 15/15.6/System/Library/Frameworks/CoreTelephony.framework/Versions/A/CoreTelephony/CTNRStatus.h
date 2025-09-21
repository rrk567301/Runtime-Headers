@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isSASwitchVisible) char saSwitchVisible;
@property (nonatomic, getter=isSASwitchConfigurable) char saSwitchConfigurable;
@property (nonatomic, getter=isSADisabled) char saDisabled;
@property (nonatomic) unsigned long long saDisabledReasonMask;
@property (nonatomic, getter=isNSADisabled) char nsaDisabled;
@property (nonatomic) unsigned long long nsaDisabledReasonMask;

+ (id)default;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSASwitchVisible:(char)a0 saSwitchConfigurable:(char)a1 saDisabledByBaseband:(char)a2 saDisabledReasonMask:(unsigned long long)a3 nsaDisabledByBaseband:(char)a4 nsaDisabledReasonMask:(unsigned long long)a5;

@end
