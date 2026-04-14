@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse> {
    unsigned long long offset;
    NSData *data;
}

- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)dealloc;

@end
