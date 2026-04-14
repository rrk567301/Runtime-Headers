@class NSData;

@interface SMNKeychainTransferAction : SMNAction

@property (retain) NSData *data;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)initWithData:(id)a0;
- (id)description;
- (BOOL)success;
- (void).cxx_destruct;
- (id)resultData;
- (id)requestPayload;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
