@interface DIStackParams : DIBaseParams

- (id)initWithURL:(id)a0 error:(id *)a1;
- (char)appendWithURL:(id)a0 isCache:(char)a1 error:(id *)a2;
- (char)appendWithURL:(id)a0 isCache:(char)a1 numBlocks:(unsigned long long)a2 error:(id *)a3;
- (char)supportsPstack;

@end
