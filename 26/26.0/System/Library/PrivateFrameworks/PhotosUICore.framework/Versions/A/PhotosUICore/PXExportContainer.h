@class NSString, PHFetchResult, NSURL, PHCollection;

@interface PXExportContainer : NSObject {
    PHCollection *_collection;
}

@property (readonly, nonatomic) PHFetchResult *assets;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSURL *url;

+ (void)_traverseStartingAt:(id)a0 prefix:(id)a1 storeIn:(id)a2 uniquifier:(id)a3;
+ (id)containersForRootCollection:(id)a0 destinationURL:(id)a1;
+ (id)containersForRootCollection:(id)a0 destinationURL:(id)a1 uniquifier:(id)a2 includeRootName:(BOOL)a3;

- (id)init;
- (id)description;
- (id)_initWithCollection:(id)a0;
- (void).cxx_destruct;

@end
