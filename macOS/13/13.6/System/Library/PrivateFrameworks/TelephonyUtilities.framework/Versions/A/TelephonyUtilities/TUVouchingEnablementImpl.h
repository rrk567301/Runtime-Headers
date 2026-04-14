@class FTServerBag, NSUserDefaults;
@protocol TUFeatureFlags;

@interface TUVouchingEnablementImpl : NSObject <TUVouchingEnablement>

@property (retain, nonatomic) id<TUFeatureFlags> featureFlags;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) FTServerBag *serverBag;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL shouldForceVerificationFailures;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFeatureFlags:(id)a0 userDefaults:(id)a1 serverBag:(id)a2;
- (BOOL)serverBagValueForKey:(id)a0 withDefault:(BOOL)a1;

@end
