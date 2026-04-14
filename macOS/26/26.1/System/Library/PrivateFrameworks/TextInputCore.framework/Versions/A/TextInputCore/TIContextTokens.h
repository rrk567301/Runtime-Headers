@interface TIContextTokens : NSObject

@property (nonatomic) void *context;

- (void)clear;
- (void)popBack;
- (unsigned long long)size;
- (const struct TITokenID { unsigned int x0; unsigned int x1; } *)begin;
- (id)initWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1 contextStringTokens:(id)a2;
- (void)appendToken:(struct TITokenID { unsigned int x0; unsigned int x1; })a0 string:(id)a1;
- (void)dealloc;
- (void *)lmContext;
- (id)init;

@end
