@class NSString;

@interface HMDHomeActivityRootState : HMDHomeActivityState <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)stateType;

- (long long)handleEvent:(id)a0;
- (id)initWithParent:(id)a0;

@end
