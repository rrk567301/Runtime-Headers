@class NSURL, NSDictionary, NSString;

@interface ISBundleResourceProvider : ISResourceProvider

@property (retain) NSURL *bundleURL;
@property (retain) NSDictionary *iconDictionary;
@property unsigned long long options;
@property (retain) NSString *templateType;

- (id)description;
- (void).cxx_destruct;
- (id)symbol;
- (id)resourceNamed:(id)a0;
- (char)_isAppleResource;
- (id)iconResource;
- (id)initWithBundle:(id)a0 options:(unsigned long long)a1;
- (id)initWithBundleURL:(id)a0 iconDictionary:(id)a1 options:(unsigned long long)a2;
- (void)resolveResources;
- (id)templateIconResource;

@end
