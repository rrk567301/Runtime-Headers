@class NSString;

@interface HTTPRedirectResponse : NSObject <HTTPResponse> {
    NSString *redirectPath;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (long long)status;
- (id)initWithPath:(id)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)httpHeaders;
- (char)isDone;
- (unsigned long long)contentLength;

@end
