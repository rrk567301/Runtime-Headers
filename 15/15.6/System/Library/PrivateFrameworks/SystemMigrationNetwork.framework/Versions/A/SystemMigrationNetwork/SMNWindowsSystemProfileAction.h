@interface SMNWindowsSystemProfileAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (char)success;
- (id)initWithProfile:(id)a0;
- (id)requestPayload;
- (char)expectsAResult;

@end
