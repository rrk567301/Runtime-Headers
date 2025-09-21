@class NSSet, COClusterMember, COHomeKitAccessoryMemento;
@protocol COInterestTrackerDelegate;

@interface COInterestTracker : NSObject

@property (nonatomic) char triggerReset;
@property (nonatomic) unsigned long long remoteInterests;
@property (nonatomic) unsigned long long interestsSerial;
@property (readonly, copy, nonatomic) COHomeKitAccessoryMemento *accessory;
@property (copy, nonatomic) NSSet *interests;
@property (nonatomic) char primaryAvailable;
@property (retain, nonatomic) COClusterMember *secondary;
@property (readonly, weak, nonatomic) id<COInterestTrackerDelegate> delegate;

- (void).cxx_destruct;
- (void)_checkTriggerReset;
- (unsigned long long)_nextInterestSerial;
- (void)_setInterest:(id)a0;
- (char)canDispatchWithPrimary:(char)a0;
- (id)initWithAccessory:(id)a0 delegate:(id)a1 primaryAvailable:(char)a2 secondary:(id)a3;

@end
