@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse> {
    unsigned long long offset;
    NSData *data;
}

+ (void)initialize;

- (unsigned long long)contentLength;
- (BOOL)isDone;
- (id)initWithData:(id)a0;
- (void)setOffset:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (void)dealloc;

@end
