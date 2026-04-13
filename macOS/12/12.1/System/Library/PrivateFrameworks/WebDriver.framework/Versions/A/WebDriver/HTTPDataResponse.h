@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse> {
    unsigned long long offset;
    NSData *data;
}

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)contentLength;

@end
