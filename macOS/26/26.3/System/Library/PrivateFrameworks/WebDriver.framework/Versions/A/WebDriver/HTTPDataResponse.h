@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse> {
    unsigned long long offset;
    NSData *data;
}

- (id)readDataOfLength:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
