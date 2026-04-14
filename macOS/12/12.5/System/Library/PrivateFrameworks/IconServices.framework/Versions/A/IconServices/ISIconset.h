@class NSURL, ISVariant, NSMutableDictionary;

@interface ISIconset : NSObject

@property (readonly) ISVariant *_primaryVariant;
@property (readonly) NSMutableDictionary *additionalVariants;
@property (readonly) NSURL *URL;

+ (id)iconsetWithURL:(id)a0 error:(id *)a1;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)loadResources;
- (id)icnsWithFlags:(long long)a0;
- (BOOL)addResouceWithURL:(id)a0 error:(id *)a1;
- (BOOL)writeAsICNSToURL:(id)a0 flags:(long long)a1 error:(id *)a2;
- (BOOL)writeAsICNSToURL:(id)a0 flags:(long long)a1;
- (id)primaryVariantSelected:(BOOL)a0;
- (id)templateVariantSelected:(BOOL)a0;

@end
