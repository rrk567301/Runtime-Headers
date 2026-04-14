@class NSDictionary, MechanismBase, NSNumber, NSDate;
@protocol LAUIDelegate;

@interface AuthenticationInProgress : NSObject {
    id<LAUIDelegate> _uiDelegate;
    NSDictionary *_internalOptions;
    id /* block */ _reply;
    int _originatorPid;
    NSDate *_started;
}

@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) MechanismBase *mechanism;
@property (readonly, nonatomic) long long originatorId;
@property (readonly, nonatomic) unsigned int originatorUid;
@property (readonly, nonatomic) NSNumber *ahpMode;

- (id)description;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (id)initWithMechanism:(id)a0 policy:(long long)a1 uiDelegate:(id)a2 originator:(id)a3 internalInfo:(id)a4 reply:(id /* block */)a5;

@end
