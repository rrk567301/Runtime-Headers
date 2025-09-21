@class NSUUID, _HMContext, NSString, HMActionSet;

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) _HMContext *context;
@property (readonly) unsigned long long type;
@property (copy) NSUUID *uuid;
@property (readonly, weak) HMActionSet *actionSet;
@property (readonly, getter=isAffectedByEndEvents) char affectedByEndEvents;
@property (readonly, getter=isValid) char valid;
@property (readonly) char requiresDeviceUnlock;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (char)isValidWithError:(id *)a0;
- (char)_handleUpdates:(id)a0;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (id)encodeAsProtoBuf;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (char)mergeFromNewObject:(id)a0;

@end
