@class NSMutableSet;

@interface SMNPathSizer : NSObject

@property (retain) NSMutableSet *hardlinkInodes;
@property (retain) NSMutableSet *cloneIDs;

- (void).cxx_destruct;
- (id)init;
- (id)statsForURL:(id)a0;

@end
