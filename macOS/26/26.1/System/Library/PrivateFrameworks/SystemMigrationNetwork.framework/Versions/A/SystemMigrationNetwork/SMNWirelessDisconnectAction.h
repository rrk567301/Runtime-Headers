@interface SMNWirelessDisconnectAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (BOOL)success;
- (id)resultData;
- (id)description;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
