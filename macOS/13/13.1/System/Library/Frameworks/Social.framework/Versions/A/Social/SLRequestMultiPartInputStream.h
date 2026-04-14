@class NSData, SLRequestMultiPart;

@interface SLRequestMultiPartInputStream : NSInputStream {
    SLRequestMultiPart *_multiPart;
    unsigned long long _streamStatus;
    unsigned long long _bytesReadInState;
    unsigned long long _totalBytesRead;
    NSData *_srcData;
    int _currentState;
}

- (unsigned long long)length;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)close;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void).cxx_destruct;
- (id)initWithMultiPart:(id)a0;
- (void)transitionState;
- (unsigned long long)readStateSourceData:(id)a0 toBuffer:(char *)a1 offset:(unsigned long long)a2 maxLength:(unsigned long long)a3;
- (long long)currentStateRead:(char *)a0 maxLength:(unsigned long long)a1;

@end
