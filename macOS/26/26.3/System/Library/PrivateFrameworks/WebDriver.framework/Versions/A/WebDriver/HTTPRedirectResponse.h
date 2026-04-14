@class NSString;

@interface HTTPRedirectResponse : NSObject <HTTPResponse> {
    NSString *redirectPath;
}

- (id)httpHeaders;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (id)initWithPath:(id)a0;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)status;

@end
