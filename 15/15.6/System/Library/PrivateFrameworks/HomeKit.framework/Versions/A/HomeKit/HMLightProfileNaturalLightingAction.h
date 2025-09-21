@class HMLightProfile;

@interface HMLightProfileNaturalLightingAction : HMAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, getter=isNaturalLightingEnabled) char naturalLightingEnabled;
@property (readonly) HMLightProfile *lightProfile;

+ (char)supportsSecureCoding;
+ (id)actionWithProtoBuf:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (char)_handleUpdates:(id)a0;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)_serializeForAdd;
- (id)encodeAsProtoBuf;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (id)initWithLightProfile:(id)a0 naturalLightingEnabled:(char)a1;
- (char)mergeFromNewObject:(id)a0;
- (void)updateNaturalLightingEnabled:(char)a0 completionHandler:(id /* block */)a1;

@end
