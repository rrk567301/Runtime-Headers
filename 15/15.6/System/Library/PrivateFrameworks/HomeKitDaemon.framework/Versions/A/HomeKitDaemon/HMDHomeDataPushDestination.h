@class NSString, HMDUser;

@interface HMDHomeDataPushDestination : NSObject

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *pushDestination;
@property (nonatomic) char ignoreConfigCompare;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 destination:(id)a1;

@end
