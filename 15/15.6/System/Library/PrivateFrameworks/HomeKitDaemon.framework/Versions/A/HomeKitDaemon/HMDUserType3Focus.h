@class NSDate;

@interface HMDUserType3Focus : HMFObject

@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) NSDate *updatedTime;
@property (readonly, nonatomic, getter=isUserActionTriggered) char userActionTriggered;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnabled:(char)a0 updatedTime:(id)a1 userActionTriggered:(char)a2;

@end
