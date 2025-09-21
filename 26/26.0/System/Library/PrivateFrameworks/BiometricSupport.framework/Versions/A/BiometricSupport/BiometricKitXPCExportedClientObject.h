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

- (void)matchResult:(id)a0 details:(id)a1;
- (void)homeButtonPressed;
- (void)setClientAppIsInactive:(BOOL)a0;
- (id)initWithClientID:(unsigned long long)a0 clientInfo:(id)a1 exportedObject:(id)a2;
- (void)setClientAppIsBackground:(BOOL)a0;
- (void)enrollFeedback:(id)a0;
- (void)statusMessage:(unsigned int)a0;
- (void)touchIDButtonPressed:(BOOL)a0;
- (id)processName;
- (void)templateUpdate:(id)a0 details:(id)a1;
- (void)statusMessage:(unsigned int)a0 details:(id)a1;
- (id)description;
- (void)enrollResult:(id)a0;
- (id)uuid;
- (id)name;
- (void)setDelegateRegistered:(BOOL)a0;
- (void)taskResumeStatus:(int)a0;
- (void)enrollUpdate:(id)a0;
- (void).cxx_destruct;
- (void)enrollResult:(id)a0 details:(id)a1;

@end
