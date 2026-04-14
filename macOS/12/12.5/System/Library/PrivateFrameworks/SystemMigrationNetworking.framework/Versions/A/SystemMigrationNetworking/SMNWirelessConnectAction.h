@class NSString;

@interface SMNWirelessConnectAction : SMNAction

@property (retain) NSString *wirelessSSID;
@property (retain) NSString *password;
@property unsigned long long timeout;
@property unsigned long long retryDelay;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)success;
- (id)resultData;
- (id)requestPayload;
- (id)initWithSSID:(id)a0 password:(id)a1;
- (BOOL)expectsAResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;
- (id)setOfClassesToDecodeInTheResult;
- (id)initWithSSID:(id)a0 password:(id)a1 timeout:(unsigned long long)a2 retryDelay:(unsigned long long)a3;

@end
