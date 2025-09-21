@class NSString;

@interface HTTPRedirectResponse : NSObject <HTTPResponse> {
    NSString *redirectPath;
}

- (id)initWithPath:(id)a0;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)contentLength;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (long long)status;
- (id)httpHeaders;
- (void).cxx_destruct;

@end
