@class NSArray;

@interface SMNBundleInfoAction : SMNAction

@property (retain) NSArray *bundlePaths;

+ (int)actionID;
+ (id)setOfClassesToDecodeInTheResult;
+ (id)actionWithPayload:(id)a0;

- (BOOL)success;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resultData;
- (id)description;
- (id)requestPayload;
- (id)initWithBundlePaths:(id)a0;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
