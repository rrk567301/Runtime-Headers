@class NSDictionary;

@interface SMNWindowsDelegateAction : SMNAction

@property (retain) NSDictionary *dictionary;

+ (int)actionID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
