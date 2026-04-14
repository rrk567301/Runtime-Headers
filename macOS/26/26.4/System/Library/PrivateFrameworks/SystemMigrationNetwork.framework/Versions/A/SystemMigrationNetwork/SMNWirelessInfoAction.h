@class NSSet;

@interface SMNWirelessInfoAction : SMNAction

@property (retain) NSSet *supportedChannels;
@property long long swapProcess;

+ (int)actionID;
+ (id)setOfClassesToDecodeInTheResult;
+ (id)actionWithPayload:(id)a0;

- (void).cxx_destruct;
- (id)resultData;
- (id)description;
- (id)requestPayload;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
