@interface SMNWirelessDisconnectAction : SMNAction

+ (int)actionID;
+ (id)setOfClassesToDecodeInTheResult;
+ (id)actionWithPayload:(id)a0;

- (BOOL)success;
- (id)resultData;
- (id)description;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
