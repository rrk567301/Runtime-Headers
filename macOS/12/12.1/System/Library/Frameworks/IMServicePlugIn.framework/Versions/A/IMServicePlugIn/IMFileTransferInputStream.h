@class IMServicePlugInOutgoingFileTransfer, NSInputStream;

@interface IMFileTransferInputStream : NSInputStream {
    IMServicePlugInOutgoingFileTransfer *_transfer;
    NSInputStream *_stream;
}

- (void)dealloc;
- (id)delegate;
- (unsigned long long)streamStatus;
- (id)streamError;
- (BOOL)hasBytesAvailable;
- (id)initWithURL:(id)a0;
- (void)open;
- (void)close;
- (void)setDelegate:(id)a0;
- (id)propertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)setFileTransfer:(id)a0;

@end
