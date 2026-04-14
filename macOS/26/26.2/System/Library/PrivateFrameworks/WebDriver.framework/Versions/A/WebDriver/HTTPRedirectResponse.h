@class NSString;

@interface HTTPRedirectResponse : NSObject <HTTPResponse> {
    NSString *redirectPath;
}

- (unsigned long long)contentLength;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (long long)status;
- (void).cxx_destruct;
- (id)httpHeaders;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)initWithPath:(id)a0;
- (unsigned long long)offset;
- (void)dealloc;

@end
