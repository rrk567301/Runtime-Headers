@class NSString;

@interface NEIKEv2RequestContext : NSObject

@property (nonatomic) int requestType;
@property (nonatomic) BOOL requestInitiator;
@property (nonatomic) BOOL preventSleepUntilFinished;
@property (retain, nonatomic) NSString *powerAssertionName;
@property (nonatomic) unsigned int powerAssertionID;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;
- (id)initWithRequestType:(int)a0;
- (void)takePowerAssertionIfNeededWithSession:(id)a0;
- (void)releasePowerAssertionIfNeeded;

@end
