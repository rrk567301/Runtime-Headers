@class NSArray;

@interface SMNBundleInfoAction : SMNAction

@property (retain) NSArray *bundlePaths;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (BOOL)success;
- (void).cxx_destruct;
- (id)resultData;
- (BOOL)isEqual:(id)a0;
- (id)requestPayload;
- (id)initWithBundlePaths:(id)a0;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
