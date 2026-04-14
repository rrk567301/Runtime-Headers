@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse> {
    unsigned long long offset;
    NSData *data;
}

- (BOOL)isDone;
- (id)initWithData:(id)a0;
- (void)setOffset:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)contentLength;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (void).cxx_destruct;

@end
