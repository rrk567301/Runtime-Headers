@class NSDictionary, BiometricKitXPCExportedObject;

@interface BiometricKitXPCExportedClientObject : NSObject {
    BiometricKitXPCExportedObject *_exportedObject;
}

@property (readonly, nonatomic) unsigned long long clientID;
@property (readonly, copy, nonatomic) NSDictionary *clientInfo;
@property (readonly, nonatomic) BOOL delegateRegistered;
@property (readonly, nonatomic) BOOL clientAppIsBackground;
@property (readonly, nonatomic) BOOL clientAppIsInactive;
@property (readonly, weak, nonatomic) BiometricKitXPCExportedObject *exportedObject;

- (id)uuid;
- (void)enrollFeedback:(id)a0;
- (void)statusMessage:(unsigned int)a0 details:(id)a1;
- (void)statusMessage:(unsigned int)a0;
- (void)matchResult:(id)a0 details:(id)a1;
- (id)initWithClientID:(unsigned long long)a0 clientInfo:(id)a1 exportedObject:(id)a2;
- (void)enrollResult:(id)a0;
- (void)templateUpdate:(id)a0 details:(id)a1;
- (void)taskResumeStatus:(int)a0;
- (void).cxx_destruct;
- (void)homeButtonPressed;
- (void)setClientAppIsBackground:(BOOL)a0;
- (id)processName;
- (id)description;
- (id)name;
- (void)setClientAppIsInactive:(BOOL)a0;
- (void)enrollUpdate:(id)a0;
- (void)setDelegateRegistered:(BOOL)a0;
- (void)touchIDButtonPressed:(BOOL)a0;
- (void)enrollResult:(id)a0 details:(id)a1;

@end
