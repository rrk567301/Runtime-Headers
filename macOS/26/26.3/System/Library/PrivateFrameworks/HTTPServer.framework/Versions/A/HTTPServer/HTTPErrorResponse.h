@interface HTTPErrorResponse : NSObject <HTTPResponse> {
    long long _status;
}

- (id)readDataOfLength:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (long long)status;
- (id)initWithErrorCode:(int)a0;

@end
