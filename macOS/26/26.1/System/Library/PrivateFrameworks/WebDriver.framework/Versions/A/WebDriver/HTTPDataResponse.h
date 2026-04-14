@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse> {
    unsigned long long offset;
    NSData *data;
}

- (unsigned long long)contentLength;
- (BOOL)isDone;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
