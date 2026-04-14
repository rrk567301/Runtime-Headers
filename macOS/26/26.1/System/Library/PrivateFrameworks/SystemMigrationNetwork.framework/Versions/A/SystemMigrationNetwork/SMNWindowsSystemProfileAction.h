@interface SMNWindowsSystemProfileAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (BOOL)success;
- (id)initWithProfile:(id)a0;
- (id)description;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
