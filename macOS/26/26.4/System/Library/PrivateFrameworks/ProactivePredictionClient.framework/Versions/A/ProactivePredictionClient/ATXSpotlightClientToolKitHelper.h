@interface ATXSpotlightClientToolKitHelper : NSObject {
    void /* unknown type, empty encoding */ cachedResult;
    void /* unknown type, empty encoding */ customIconCache;
}

@property (class, nonatomic, readonly) ATXSpotlightClientToolKitHelper *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)customIconForToolID:(id)a0;
- (id)fetchToolInvocationsByBundleNameAndReturnError:(id *)a0;

@end
