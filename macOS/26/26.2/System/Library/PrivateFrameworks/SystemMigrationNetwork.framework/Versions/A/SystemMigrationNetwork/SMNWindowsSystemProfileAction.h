@interface SMNWindowsSystemProfileAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (BOOL)success;
- (id)description;
- (id)initWithProfile:(id)a0;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
