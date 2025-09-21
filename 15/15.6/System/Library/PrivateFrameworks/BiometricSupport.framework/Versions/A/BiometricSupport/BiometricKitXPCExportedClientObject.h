@class NSDictionary, BiometricKitXPCExportedObject;

@interface BiometricKitXPCExportedClientObject : NSObject {
    BiometricKitXPCExportedObject *_exportedObject;
}

@property (readonly, nonatomic) unsigned long long clientID;
@property (readonly, copy, nonatomic) NSDictionary *clientInfo;
@property (readonly, nonatomic) char delegateRegistered;
@property (readonly, nonatomic) char clientAppIsBackground;
@property (readonly, nonatomic) char clientAppIsInactive;
@property (readonly, weak, nonatomic) BiometricKitXPCExportedObject *exportedObject;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)processName;
- (void)enrollResult:(id)a0;
- (void)homeButtonPressed;
- (void)statusMessage:(unsigned int)a0;
- (void)taskResumeStatus:(int)a0;
- (void)touchIDButtonPressed:(char)a0;
- (void)enrollFeedback:(id)a0;
- (void)enrollResult:(id)a0 details:(id)a1;
- (void)enrollUpdate:(id)a0;
- (id)initWithClientID:(unsigned long long)a0 clientInfo:(id)a1 exportedObject:(id)a2;
- (void)matchResult:(id)a0 details:(id)a1;
- (void)setClientAppIsBackground:(char)a0;
- (void)setClientAppIsInactive:(char)a0;
- (void)setDelegateRegistered:(char)a0;
- (void)statusMessage:(unsigned int)a0 details:(id)a1;
- (void)templateUpdate:(id)a0 details:(id)a1;

@end
