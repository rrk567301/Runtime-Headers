@class NSDictionary;

@interface SMNWindowsDelegateAction : SMNAction

@property (retain) NSDictionary *dictionary;

+ (int)actionID;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
