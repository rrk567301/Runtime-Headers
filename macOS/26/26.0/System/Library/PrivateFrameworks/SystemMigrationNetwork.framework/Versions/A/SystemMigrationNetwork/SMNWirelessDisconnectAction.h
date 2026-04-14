@interface SMNWirelessDisconnectAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)resultData;
- (id)description;
- (BOOL)success;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
