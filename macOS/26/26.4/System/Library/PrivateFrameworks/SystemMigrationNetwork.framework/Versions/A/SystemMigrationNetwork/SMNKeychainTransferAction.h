@class NSData;

@interface SMNKeychainTransferAction : SMNAction

@property (retain) NSData *data;

+ (int)actionID;
+ (id)setOfClassesToDecodeInTheResult;
+ (id)actionWithPayload:(id)a0;

- (id)initWithData:(id)a0;
- (BOOL)success;
- (void).cxx_destruct;
- (id)resultData;
- (id)description;
- (id)requestPayload;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
