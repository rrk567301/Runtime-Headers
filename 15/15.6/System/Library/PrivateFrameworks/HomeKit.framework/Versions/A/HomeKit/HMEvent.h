@class NSUUID, _HMContext, NSString, HMEventTrigger;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isEndEvent) char endEvent;
@property (readonly, nonatomic) NSString *triggerType;
@property (weak, nonatomic) HMEventTrigger *eventTrigger;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (char)isSupportedForHome:(id)a0;
+ (char)sharedTriggerActivationSupportedForHome:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDict:(id)a0;
- (void)__configureWithContext:(id)a0 eventTrigger:(id)a1;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_updateEventWithPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateFromDictionary:(id)a0;
- (void)_updateTriggerType;
- (char)mergeFromNewObject:(id)a0;

@end
