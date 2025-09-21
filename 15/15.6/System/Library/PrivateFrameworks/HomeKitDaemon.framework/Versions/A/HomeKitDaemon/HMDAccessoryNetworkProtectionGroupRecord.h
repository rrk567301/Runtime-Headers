@class HMDAccessoryNetworkProtectionGroup;

@interface HMDAccessoryNetworkProtectionGroupRecord : NSObject

@property (nonatomic, getter=isActive) char active;
@property (nonatomic, getter=isPersisted) char persisted;
@property (readonly) HMDAccessoryNetworkProtectionGroup *group;

+ (id)recordWithGroup:(id)a0 active:(char)a1 persisted:(char)a2;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 active:(char)a1 persisted:(char)a2;

@end
