@interface TIContextTokens : NSObject

@property (nonatomic) void *context;

- (id)initWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1 contextStringTokens:(id)a2;
- (void *)lmContext;
- (void)appendToken:(struct TITokenID { unsigned int x0; unsigned int x1; })a0 string:(id)a1;
- (void)clear;
- (void)popBack;
- (const struct TITokenID { unsigned int x0; unsigned int x1; } *)begin;
- (id)init;
- (void)dealloc;
- (unsigned long long)size;

@end
