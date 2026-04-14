@class NSMutableData;

@interface SAMutableDataOutputStream : SAOutputStream {
    NSMutableData *_outputData;
}

- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)hasSpaceAvailable;
- (void).cxx_destruct;
- (int)appendData:(id)a0;

@end
