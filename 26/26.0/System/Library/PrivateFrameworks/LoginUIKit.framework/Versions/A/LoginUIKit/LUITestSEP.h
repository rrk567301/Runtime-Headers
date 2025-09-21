@class NSMutableDictionary;

@interface LUITestSEP : NSObject

@property (class, readonly) LUITestSEP *sharedTestSEP;

@property (retain) NSMutableDictionary *sepResults;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)sepResultForUser:(id)a0;

@end
