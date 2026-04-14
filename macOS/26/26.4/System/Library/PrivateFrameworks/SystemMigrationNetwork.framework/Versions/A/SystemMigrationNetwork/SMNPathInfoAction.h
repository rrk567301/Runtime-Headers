@class NSArray, NSSet;

@interface SMNPathInfoAction : SMNAction

@property (retain) NSArray *paths;
@property (retain) NSSet *keys;

+ (int)actionID;
+ (id)setOfClassesToDecodeInTheResult;
+ (id)actionWithPayload:(id)a0;

- (BOOL)success;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resultData;
- (id)description;
- (id)requestPayload;
- (id)initWithPaths:(id)a0 andKeys:(id)a1;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
