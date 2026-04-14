@class NSMutableDictionary;

@interface LUITestSEP : NSObject

@property (class, readonly) LUITestSEP *sharedTestSEP;

@property (retain) NSMutableDictionary *sepResults;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sepResultForUser:(id)a0;

@end
