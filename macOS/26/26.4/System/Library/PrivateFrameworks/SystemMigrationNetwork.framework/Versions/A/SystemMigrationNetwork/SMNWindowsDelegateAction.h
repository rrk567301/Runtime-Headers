@class NSDictionary;

@interface SMNWindowsDelegateAction : SMNAction

@property (retain) NSDictionary *dictionary;

+ (int)actionID;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
