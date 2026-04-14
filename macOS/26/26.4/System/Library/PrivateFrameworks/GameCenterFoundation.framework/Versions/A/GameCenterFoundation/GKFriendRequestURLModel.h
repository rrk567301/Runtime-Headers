@class NSString, GKPlayer;

@interface GKFriendRequestURLModel : NSObject

@property (retain, nonatomic) NSString *friendSupportPageURL;
@property (retain, nonatomic) NSString *friendCode;
@property (retain, nonatomic) NSString *friendRequestState;
@property (retain, nonatomic) GKPlayer *initiator;
@property (retain, nonatomic) NSString *friendRequestVersion;

- (void).cxx_destruct;
- (id)description;

@end
