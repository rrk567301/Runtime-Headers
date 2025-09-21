@class NSDate;

@interface HMDHomeActivityStateHoldInfo : HMFObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSDate *activationDate;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithHomeActivityState:(unsigned long long)a0 activationDate:(id)a1;

@end
