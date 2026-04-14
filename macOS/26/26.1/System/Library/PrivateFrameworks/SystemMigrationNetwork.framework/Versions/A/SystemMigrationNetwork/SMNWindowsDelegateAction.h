@class NSDictionary;

@interface SMNWindowsDelegateAction : SMNAction

@property (retain) NSDictionary *dictionary;

+ (int)actionID;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
