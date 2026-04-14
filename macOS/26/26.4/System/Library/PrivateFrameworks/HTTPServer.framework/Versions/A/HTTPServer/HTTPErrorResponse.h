@interface HTTPErrorResponse : NSObject <HTTPResponse> {
    long long _status;
}

- (id)readDataOfLength:(unsigned long long)a0;
- (long long)status;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)contentLength;
- (unsigned long long)offset;
- (id)initWithErrorCode:(int)a0;

@end
