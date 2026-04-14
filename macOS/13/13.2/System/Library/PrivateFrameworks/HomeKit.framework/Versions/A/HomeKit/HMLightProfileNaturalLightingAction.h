@class HMLightProfile;

@interface HMLightProfileNaturalLightingAction : HMAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (readonly) HMLightProfile *lightProfile;

+ (BOOL)supportsSecureCoding;
+ (id)actionFromProtoBuf:(id)a0 home:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (BOOL)_handleUpdates:(id)a0;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)encodeAsProtoBuf;
- (id)initWithLightProfile:(id)a0 naturalLightingEnabled:(BOOL)a1;
- (void)updateNaturalLightingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
