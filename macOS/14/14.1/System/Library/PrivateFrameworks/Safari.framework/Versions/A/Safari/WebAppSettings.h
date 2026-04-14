@class NSURL, NSArray, _WKApplicationManifest;

@interface WebAppSettings : NSObject

@property (retain, nonatomic) _WKApplicationManifest *manifest;
@property (readonly, nonatomic) NSURL *homeURL;
@property (readonly, nonatomic) NSURL *scope;
@property (readonly, nonatomic) BOOL allowsBackForwardNavigationGestures;
@property (readonly, nonatomic) NSArray *menus;

- (void).cxx_destruct;
- (id)initWithManifest:(id)a0;

@end
