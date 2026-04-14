@class NSSet;

@interface SMNWirelessInfoAction : SMNAction

@property (retain) NSSet *supportedChannels;
@property long long swapProcess;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)resultData;
- (id)requestPayload;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;
- (id)setOfClassesToDecodeInTheResult;

@end
