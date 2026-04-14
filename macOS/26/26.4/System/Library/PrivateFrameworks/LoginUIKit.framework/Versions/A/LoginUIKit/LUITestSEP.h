@class NSMutableDictionary;

@interface LUITestSEP : NSObject

@property (class, readonly) LUITestSEP *sharedTestSEP;

@property (retain) NSMutableDictionary *sepResults;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)sepResultForUser:(id)a0;

@end
