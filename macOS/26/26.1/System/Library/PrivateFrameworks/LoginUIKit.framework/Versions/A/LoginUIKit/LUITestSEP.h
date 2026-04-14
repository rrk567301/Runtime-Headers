@class NSMutableDictionary;

@interface LUITestSEP : NSObject

@property (class, readonly) LUITestSEP *sharedTestSEP;

@property (retain) NSMutableDictionary *sepResults;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)sepResultForUser:(id)a0;

@end
