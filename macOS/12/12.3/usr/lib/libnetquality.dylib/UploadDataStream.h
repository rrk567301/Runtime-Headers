@interface UploadDataStream : NSInputStream {
    unsigned long long remainingLength;
    unsigned long long status;
}

- (id)delegate;
- (unsigned long long)streamStatus;
- (id)streamError;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)close;
- (void)setDelegate:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (id)initWithLength:(unsigned long long)a0;

@end
