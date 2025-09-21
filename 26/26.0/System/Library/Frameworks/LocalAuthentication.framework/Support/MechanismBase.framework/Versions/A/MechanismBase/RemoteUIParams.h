@class NSString, LACUserInterfaceRequest, NSData, MechanismUI, NSNumber;
@protocol LACUIMechanism, LACRemoteUIHost, LACRemoteUI, LACEvaluationRequest, RemoteUINotificationCenter;

@interface RemoteUIParams : NSObject {
    LACUserInterfaceRequest *_uiRequest;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MechanismUI<LACUIMechanism, LACRemoteUIHost> *uiMechanism;
@property (readonly, nonatomic) long long hostedRemoteController;
@property (readonly, nonatomic) NSData *auditTokenData;
@property (readonly, nonatomic) BOOL lsApplicationIdentity;
@property (readonly, nonatomic) BOOL forSoftwareUpdate;
@property (readonly, nonatomic) BOOL forSiri;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSNumber *userId;
@property (readonly, nonatomic) unsigned int requestID;
@property (readonly, nonatomic) id<LACEvaluationRequest> evaluationRequest;
@property (retain, nonatomic) id<RemoteUINotificationCenter> notificationCenter;
@property (retain, nonatomic) id<LACRemoteUI> remoteUI;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMechanism:(id)a0;
- (id)initWithMechanism:(id)a0 hostedRemoteController:(long long)a1;

@end
