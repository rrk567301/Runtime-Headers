@class NSString, RWIDriverConfiguration, RWITarget, NSSet, RWIDriverState;
@protocol RWIDriverSessionProvider;

@interface RWIDriver : NSObject

@property (nonatomic, getter=isRegistered) BOOL registered;
@property (copy, nonatomic) RWIDriverState *state;
@property (copy, nonatomic) RWIDriverConfiguration *configuration;
@property (retain, nonatomic) id<RWIDriverSessionProvider> sessionProvider;
@property (readonly, nonatomic) RWITarget *target;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *hostname;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) long long bidiPort;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSSet *sessionIdentifiers;

- (void)start;
- (void)stop;
- (long long)port;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 initialState:(id)a1 relatedTarget:(id)a2;
- (id)localSessionWithIdentifier:(id)a0;

@end
