@class NSURL, NSDictionary, NSString;

@interface ISBundleResourceProvider : ISResourceProvider

@property (retain) NSURL *bundleURL;
@property (retain) NSDictionary *iconDictionary;
@property unsigned long long options;
@property (retain) NSString *templateType;

- (id)description;
- (id)symbol;
- (id)resourceNamed:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isAppleResource;
- (BOOL)_shouldTreatLikeApp;
- (id)iconResource;
- (id)initWithBundle:(id)a0 options:(unsigned long long)a1;
- (id)initWithBundleURL:(id)a0 iconDictionary:(id)a1 options:(unsigned long long)a2;
- (void)resolveResources;
- (id)templateIconResource;

@end
