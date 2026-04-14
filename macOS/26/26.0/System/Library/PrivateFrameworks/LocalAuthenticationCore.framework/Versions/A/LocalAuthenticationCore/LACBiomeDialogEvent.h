@class NSString, NSArray;

@interface LACBiomeDialogEvent : NSObject

@property (retain, nonatomic) NSString *dialogID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) double timeSinceUpdate;
@property (readonly, nonatomic) NSArray *mechanisms;
@property (readonly, nonatomic) long long successfulMechanism;
@property (readonly, nonatomic) NSArray *failedMechanisms;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) long long failingAction;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addAction:(long long)a0 failing:(BOOL)a1;
- (void)determineTimeSinceLastSystemUpdateWithCompletion:(id /* block */)a0;
- (void)failedAuthenticationWithMechanism:(long long)a0;
- (void)mergeBiomeEvent:(id)a0;
- (void)startedAuthenticationWithMechanism:(long long)a0;
- (void)succeededAuthenticationWithMechanism:(long long)a0;

@end
