@class NSString, NSData, MechanismUI, NSNumber;
@protocol RemoteUINotificationCenter, LACUIMechanism, LACRemoteUIHost;

@interface RemoteUIParams : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) MechanismUI<LACUIMechanism, LACRemoteUIHost> *uiMechanism;
@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic) char lsApplicationIdentity;
@property (nonatomic) char forSoftwareUpdate;
@property (nonatomic) char forSiri;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) id<RemoteUINotificationCenter> notificationCenter;
@property (nonatomic) unsigned int requestID;

- (id)description;
- (void).cxx_destruct;

@end
