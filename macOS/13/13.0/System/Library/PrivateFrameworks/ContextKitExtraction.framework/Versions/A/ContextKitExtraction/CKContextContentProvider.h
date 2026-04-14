@interface CKContextContentProvider : NSObject

+ (unsigned char)controlCodeForExecutor:(id)a0;
+ (id)handlePDFView:(id)a0 withExecutor:(id)a1;
+ (void)extractContentFromWebViewPDFData:(id)a0 withCompletionHandler:(id /* block */)a1;

- (double)timeout;
- (void)extractUsingExecutor:(id)a0;
- (void)extractUsingExecutor:(id)a0 withOptions:(unsigned long long)a1;

@end
