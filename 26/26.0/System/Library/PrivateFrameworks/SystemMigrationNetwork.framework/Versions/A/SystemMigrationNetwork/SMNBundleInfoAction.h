@class NSArray;

@interface SMNBundleInfoAction : SMNAction

@property (retain) NSArray *bundlePaths;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)resultData;
- (id)description;
- (BOOL)success;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)requestPayload;
- (id)initWithBundlePaths:(id)a0;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
