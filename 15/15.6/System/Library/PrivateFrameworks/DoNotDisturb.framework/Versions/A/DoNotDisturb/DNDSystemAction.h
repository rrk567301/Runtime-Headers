@class NSString, WFToggleSettingContextualAction, WFReverseContextualAction;

@interface DNDSystemAction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) WFToggleSettingContextualAction *action;
@property (readonly, retain, nonatomic) WFReverseContextualAction *reverseAction;
@property (readonly, nonatomic, getter=isEnabled) char enabled;

+ (char)runtimeIsSupported:(id *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0 enabled:(char)a1;
- (id)initWithAction:(id)a0 reverseAction:(id)a1 enabled:(char)a2;

@end
