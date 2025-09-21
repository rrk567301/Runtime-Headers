@class HMDDevice;
@protocol HMDUserPresence, HMDHomePresence;

@interface HMDHomePresenceUpdate : HMFObject

@property (readonly, nonatomic) id<HMDHomePresence> homePresence;
@property (readonly, nonatomic) id<HMDUserPresence> userPresence;
@property (readonly, nonatomic, getter=isUpdate) char update;
@property (readonly, nonatomic) HMDDevice *causingDevice;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHomePresence:(id)a0 userPresence:(id)a1 update:(char)a2 causingDevice:(id)a3;

@end
