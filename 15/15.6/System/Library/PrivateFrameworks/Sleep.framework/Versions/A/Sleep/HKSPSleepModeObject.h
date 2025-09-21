@class NSString;
@protocol HKSPSyncAnchor;

@interface HKSPSleepModeObject : NSObject <HKSPXPCObject>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) unsigned long long changeReason;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSleepMode:(long long)a0 changeReason:(unsigned long long)a1 syncAnchor:(id)a2;
- (id)objectWithSyncAnchor:(id)a0;

@end
