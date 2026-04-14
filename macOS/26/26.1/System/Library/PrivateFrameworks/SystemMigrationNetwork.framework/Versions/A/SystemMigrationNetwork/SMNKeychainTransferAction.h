@class NSData;

@interface SMNKeychainTransferAction : SMNAction

@property (retain) NSData *data;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (BOOL)success;
- (id)initWithData:(id)a0;
- (id)resultData;
- (id)description;
- (void).cxx_destruct;
- (id)requestPayload;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
