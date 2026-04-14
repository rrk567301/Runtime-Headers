@class NSUUID, NSPredicate;

@interface HMDAccessoryBulletinRegistrationInfo : NSObject

@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (nonatomic) long long serviceInstanceID;
@property (retain, nonatomic) NSPredicate *predicate;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (id)description;

@end
