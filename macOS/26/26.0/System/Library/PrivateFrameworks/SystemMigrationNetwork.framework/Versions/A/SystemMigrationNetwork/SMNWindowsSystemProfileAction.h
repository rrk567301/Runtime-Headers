@interface SMNWindowsSystemProfileAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)initWithProfile:(id)a0;
- (id)description;
- (BOOL)success;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
