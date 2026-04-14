@class NSString;

@interface TUDiscoverabilitySignal : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *context;

+ (void)logTipKitAnalyticsEventNamed:(id)a0;
+ (BOOL)isSeniorUser;

- (void).cxx_destruct;
- (void)donateSignalWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 context:(id)a1;

@end
