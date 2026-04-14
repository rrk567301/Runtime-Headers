@class NSString;

@interface HTTPRedirectResponse : NSObject <HTTPResponse> {
    NSString *redirectPath;
}

+ (void)initialize;

- (id)readDataOfLength:(unsigned long long)a0;
- (id)initWithPath:(id)a0;
- (long long)status;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (id)httpHeaders;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)dealloc;

@end
