@class NSString;

@interface HTTPRedirectResponse : NSObject <HTTPResponse> {
    NSString *redirectPath;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (long long)status;
- (id)initWithPath:(id)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (id)httpHeaders;
- (BOOL)isDone;
- (unsigned long long)contentLength;

@end
