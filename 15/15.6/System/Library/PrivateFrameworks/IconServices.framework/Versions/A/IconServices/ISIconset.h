@class NSURL, ISVariant, NSMutableDictionary;

@interface ISIconset : NSObject

@property (readonly) ISVariant *_primaryVariant;
@property (readonly) NSMutableDictionary *additionalVariants;
@property (readonly) NSURL *URL;

+ (id)iconsetWithURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)addResouceWithURL:(id)a0 error:(id *)a1;
- (id)icnsWithFlags:(long long)a0;
- (void)loadResources;
- (id)primaryVariantSelected:(char)a0;
- (id)templateVariantSelected:(char)a0;
- (char)writeAsICNSToURL:(id)a0 flags:(long long)a1;
- (char)writeAsICNSToURL:(id)a0 flags:(long long)a1 error:(id *)a2;

@end
