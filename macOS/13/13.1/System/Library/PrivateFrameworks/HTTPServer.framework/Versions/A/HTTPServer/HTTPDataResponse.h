@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse> {
    unsigned long long offset;
    NSData *data;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)contentLength;

@end
