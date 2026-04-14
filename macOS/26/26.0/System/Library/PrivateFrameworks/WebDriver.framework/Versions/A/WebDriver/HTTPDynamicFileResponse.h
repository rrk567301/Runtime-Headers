@class NSData, NSDictionary;

@interface HTTPDynamicFileResponse : HTTPAsyncFileResponse {
    NSData *separator;
    NSDictionary *replacementDict;
}

- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1 separator:(id)a2 replacementDictionary:(id)a3;
- (BOOL)isChunked;
- (void)processReadBuffer;

@end
