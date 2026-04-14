@class NSString, CDMClient, NSLocale;

@interface QUEmbeddingService : NSObject {
    struct UCollator { } *_icuCollator;
    unsigned short *_icuQueryBuffer;
    unsigned short *_icuPatternBuffer;
}

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) CDMClient *cdmClient;

+ (id)signpostLog;
+ (id)log;
+ (BOOL)isUnitTested;
+ (void)setTestEmbeddings:(id)a0;
+ (id)testEmbeddings;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (void)getEmbeddingForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })icuRangeOfString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 query:(id)a2;
- (id)initWithLocale:(id)a0 version:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSubtoken:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 query:(id)a2;

@end
