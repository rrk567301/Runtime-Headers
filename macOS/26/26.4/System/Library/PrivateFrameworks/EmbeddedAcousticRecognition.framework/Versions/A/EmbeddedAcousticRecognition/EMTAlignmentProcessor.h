@interface EMTAlignmentProcessor : NSObject

+ (void)initialize;
+ (id)computeSpanProjections:(id)a0 options:(id)a1;
+ (struct vector<std::vector<int>, std::allocator<std::vector<int>>> { void *x0; void *x1; struct { void *x0; } x2; })convertAlignments:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })convertPairToNSRange:(const void *)a0;
+ (id)convertProjectionsToArray:(const void *)a0;
+ (struct vector<std::pair<int, int>, std::allocator<std::pair<int, int>>> { void *x0; void *x1; struct { void *x0; } x2; })convertSpans:(id)a0;
+ (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct { void *x0; } x2; })convertTokensToVector:(id)a0;
+ (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct { void *x0; } x2; })convertWordTokens:(id)a0;
+ (id)createSpanResultsFromProjections:(const void *)a0 input:(id)a1;
+ (BOOL)validateInput:(id)a0;

@end
