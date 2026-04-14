@class HMAccessory;

@interface HMAppleMediaAccessoryPowerAction : HMAction <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) HMAccessory *accessory;
@property (nonatomic) unsigned long long targetSleepWakeState;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)_handleUpdates:(id)a0;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (void)updateWithAction:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isAffectedByEndEvents;
- (id)initWithAccessory:(id)a0 targetSleepWakeState:(unsigned long long)a1;

@end
