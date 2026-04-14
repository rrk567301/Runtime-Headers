@interface HTTPErrorResponse : NSObject <HTTPResponse> {
    long long _status;
}

- (unsigned long long)contentLength;
- (BOOL)isDone;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (long long)status;
- (id)initWithErrorCode:(int)a0;

@end
