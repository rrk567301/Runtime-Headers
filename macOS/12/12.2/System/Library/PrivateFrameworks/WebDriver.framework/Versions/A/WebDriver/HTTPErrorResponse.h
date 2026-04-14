@interface HTTPErrorResponse : NSObject <HTTPResponse> {
    long long _status;
}

- (unsigned long long)offset;
- (long long)status;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)contentLength;
- (id)initWithErrorCode:(int)a0;

@end
