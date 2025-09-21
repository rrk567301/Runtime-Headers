@class NSArray, NSSet;

@interface SMNPathInfoAction : SMNAction

@property (retain) NSArray *paths;
@property (retain) NSSet *keys;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)resultData;
- (id)description;
- (BOOL)success;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)requestPayload;
- (id)initWithPaths:(id)a0 andKeys:(id)a1;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
