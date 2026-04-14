@class NSArray;

@interface SMNBundleInfoAction : SMNAction

@property (retain) NSArray *bundlePaths;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)success;
- (id)resultData;
- (id)requestPayload;
- (id)initWithBundlePaths:(id)a0;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;
- (id)setOfClassesToDecodeInTheResult;

@end
