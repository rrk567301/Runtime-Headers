@class FTServerBag, NSUserDefaults;

@interface TUVouchingEnablementImpl : NSObject <TUVouchingEnablement>

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) FTServerBag *serverBag;
@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) char shouldForceVerificationFailures;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0 serverBag:(id)a1;
- (char)serverBagValueForKey:(id)a0 withDefault:(char)a1;

@end
