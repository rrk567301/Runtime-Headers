@class SIIndexer, NSArray, NSString;

@interface SIIndexerQuery : NSObject

@property (retain, nonatomic) SIIndexer *indexer;
@property (nonatomic) struct __SIJobRef { } *job;
@property (nonatomic) struct __SIResultQueue { } *resultQueue;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL attributeOnly;
@property (nonatomic) BOOL counting;
@property (nonatomic) BOOL hasAttributes;
@property (nonatomic) struct __SIQuery { } *query;
@property (retain, nonatomic) NSArray *foundAttributes;
@property (retain, nonatomic) NSArray *languages;
@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) NSString *spotlightQueryString;
@property (readonly, nonatomic) NSArray *attributes;
@property (retain, nonatomic) NSString *searchField;
@property (nonatomic) int flags;
@property (nonatomic) BOOL live;
@property (readonly, nonatomic) unsigned long long resultCount;
@property (retain, nonatomic) NSArray *scopes;
@property (copy) id /* block */ foundItemsHandler;
@property (copy) id /* block */ foundAttributesHandler;
@property (copy) id /* block */ resultBatchHandler;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)completed:(id)a0;
- (id)escapedQueryString:(id)a0;
- (BOOL)handleResultBatch:(struct { int x0; struct __SIJobRef *x1; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x2; union { struct { struct __MDStoreOIDArray *x0; struct __MDPlistBytes *x1; long long x2; } x0; struct { long long x0; } x1; struct { struct __MDStoreOIDArray *x0; struct __MDPlistBytes *x1; long long x2; int x3; } x2; struct __MDPlistBytes *x3; struct __MDPlistBytes *x4; struct { char *x0; unsigned long long x1; } x5; struct { double x0; } x6; } x3; } *)a0;
- (void)foundOids:(long long *)a0 count:(unsigned long long)a1 valueList:(id)a2;
- (void)foundAttributes:(id)a0;
- (void)_processResults;
- (id)initWithIndexer:(id)a0 query:(id)a1 attributes:(id)a2;
- (void)handleAttributes;

@end
