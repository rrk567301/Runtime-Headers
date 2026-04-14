@class NSString, NSBundle, NSURL, NSDictionary;

@interface OKProducerBundle : NSObject {
    NSURL *_url;
    NSBundle *_bundle;
    NSDictionary *_infoDictionary;
}

@property (retain, nonatomic) NSString *bundleExtension;
@property (readonly, nonatomic) unsigned long long type;

- (void)dealloc;
- (id)init;
- (id)identifier;
- (id)infoDictionary;
- (id)url;
- (double)version;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)bundle;
- (id)initWithURL:(id)a0 bundleType:(unsigned long long)a1;

@end
