@interface SMNWirelessDisconnectAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (char)success;
- (id)resultData;
- (id)requestPayload;
- (char)expectsAResult;
- (id)setOfClassesToDecodeInTheResult;
- (char)returnsData;
- (char)setResultFromDict:(id)a0;

@end
