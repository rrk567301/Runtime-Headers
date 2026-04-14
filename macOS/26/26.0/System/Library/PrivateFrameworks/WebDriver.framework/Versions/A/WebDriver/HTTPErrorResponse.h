@interface HTTPErrorResponse : NSObject <HTTPResponse> {
    long long _status;
}

- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)contentLength;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (long long)status;
- (id)initWithErrorCode:(int)a0;

@end
