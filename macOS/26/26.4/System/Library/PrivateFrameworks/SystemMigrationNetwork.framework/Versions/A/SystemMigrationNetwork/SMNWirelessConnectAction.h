@class NSString;

@interface SMNWirelessConnectAction : SMNAction

@property (retain) NSString *wirelessSSID;
@property (retain) NSString *password;
@property unsigned long long timeout;
@property unsigned long long retryDelay;

+ (int)actionID;
+ (id)setOfClassesToDecodeInTheResult;
+ (id)actionWithPayload:(id)a0;

- (BOOL)success;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resultData;
- (id)description;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (id)initWithSSID:(id)a0 password:(id)a1;
- (id)initWithSSID:(id)a0 password:(id)a1 timeout:(unsigned long long)a2 retryDelay:(unsigned long long)a3;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
