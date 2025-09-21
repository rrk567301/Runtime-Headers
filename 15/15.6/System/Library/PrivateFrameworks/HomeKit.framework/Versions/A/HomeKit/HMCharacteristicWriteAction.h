@class NSSet, HMCharacteristic;
@protocol NSCopying;

@interface HMCharacteristicWriteAction : HMAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSSet *allowedTargetValueClassesForShortcuts;

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, copy, nonatomic) id<NSCopying> targetValue;

+ (id)new;
+ (char)supportsSecureCoding;
+ (id)actionWithProtoBuf:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (char)isValidWithError:(id *)a0;
- (char)_handleUpdates:(id)a0;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)_resolvedCharacteristicInHome:(id)a0 forCharacteristic:(id)a1;
- (id)_serializeForAdd;
- (id)encodeAsProtoBuf;
- (id)initWithCharacteristic:(id)a0 targetValue:(id)a1;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (char)isAffectedByEndEvents;
- (char)isKindOfAllowedTargetValueClass:(id)a0;
- (char)mergeFromNewObject:(id)a0;
- (char)requiresDeviceUnlock;
- (void)updateTargetValue:(id)a0 completionHandler:(id /* block */)a1;

@end
