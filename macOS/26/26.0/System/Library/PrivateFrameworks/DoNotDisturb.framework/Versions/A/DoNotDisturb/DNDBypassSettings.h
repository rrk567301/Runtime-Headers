@class NSString;

@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long immediateBypassEventSourceType;
@property (readonly, copy) NSString *immediateBypassCNGroupIdentifier;
@property (readonly) unsigned long long repeatEventSourceBehaviorEnabledSetting;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithImmediateBypassEventSourceType:(unsigned long long)a0 immediateBypassCNGroupIdentifier:(id)a1 repeatEventSourceBehaviorEnabledSetting:(unsigned long long)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)diffDescription;
- (id)_initWithSettings:(id)a0;

@end
