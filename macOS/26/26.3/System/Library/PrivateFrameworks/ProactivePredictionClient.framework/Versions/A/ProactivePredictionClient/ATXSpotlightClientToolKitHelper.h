@interface ATXSpotlightClientToolKitHelper : NSObject {
    void /* unknown type, empty encoding */ cachedResult;
    void /* unknown type, empty encoding */ customIconCache;
}

@property (class, nonatomic, readonly) ATXSpotlightClientToolKitHelper *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)customIconForToolID:(id)a0;
- (id)fetchToolInvocationsByBundleNameAndReturnError:(id *)a0;

@end
