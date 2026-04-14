@interface SMNWindowsSystemProfileAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (id)initWithProfile:(id)a0;
- (BOOL)success;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
