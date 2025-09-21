@interface TIContextTokens : NSObject

@property (nonatomic) void *context;

- (const struct TITokenID { unsigned int x0; unsigned int x1; } *)begin;
- (void)clear;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1 contextStringTokens:(id)a2;
- (void *)lmContext;
- (void)appendToken:(struct TITokenID { unsigned int x0; unsigned int x1; })a0 string:(id)a1;
- (void)popBack;
- (unsigned long long)size;

@end
