@class MLSVREngine;

@interface MLSupportVectorRegressor : MLRegressor

@property (retain) MLSVREngine *engine;

- (void).cxx_destruct;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 description:(id)a1 error:(id *)a2;

@end
