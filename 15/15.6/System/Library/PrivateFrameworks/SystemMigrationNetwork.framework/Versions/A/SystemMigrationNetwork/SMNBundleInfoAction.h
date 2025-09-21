@class NSArray;

@interface SMNBundleInfoAction : SMNAction

@property (retain) NSArray *bundlePaths;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)success;
- (id)resultData;
- (id)requestPayload;
- (id)initWithBundlePaths:(id)a0;
- (id)setOfClassesToDecodeInTheResult;
- (char)returnsData;
- (char)setResultFromDict:(id)a0;

@end
