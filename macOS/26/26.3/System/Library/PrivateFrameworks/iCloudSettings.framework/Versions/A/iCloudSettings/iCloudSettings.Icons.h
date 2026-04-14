@class NSString, NSArray, NSDictionary, NSURL;

@interface iCloudSettings.Icons : NSObject {
    void /* function */ assetId;
    void /* function */ bundleIdentifiers;
    void /* function */ sfSymbolId;
    void /* function */ urls;
}

@property (nonatomic, readonly) NSString *assetId;
@property (nonatomic, readonly) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) NSString *sfSymbolId;
@property (nonatomic, readonly) NSDictionary *urls;
@property (nonatomic, readonly) NSURL *url1x;
@property (nonatomic, readonly) NSURL *url2x;
@property (nonatomic, readonly) NSURL *url3x;
@property (nonatomic, readonly) NSURL *darkUrl1x;
@property (nonatomic, readonly) NSURL *darkUrl2x;
@property (nonatomic, readonly) NSURL *darkUrl3x;
@property (nonatomic, readonly) NSURL *tintUrl1x;
@property (nonatomic, readonly) NSURL *tintUrl2x;
@property (nonatomic, readonly) NSURL *tintUrl3x;

- (id)iconURL;
- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
