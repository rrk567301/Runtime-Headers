@class NSArray, NSSet;

@interface SMNPathInfoAction : SMNAction

@property (retain) NSArray *paths;
@property (retain) NSSet *keys;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)success;
- (id)resultData;
- (id)requestPayload;
- (id)initWithPaths:(id)a0 andKeys:(id)a1;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;
- (id)setOfClassesToDecodeInTheResult;

@end
