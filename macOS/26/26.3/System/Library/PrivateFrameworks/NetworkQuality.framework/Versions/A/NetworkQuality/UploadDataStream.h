@class ThroughputDelegate, NSObject;
@protocol OS_dispatch_queue, NSStreamDelegate;

@interface UploadDataStream : NSInputStream {
    unsigned long long remainingLength;
    unsigned long long status;
    NSObject<OS_dispatch_queue> *callBackQueue;
    id<NSStreamDelegate> _delegate;
    ThroughputDelegate *_tputDelegate;
    BOOL stalling;
}

- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)streamStatus;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)close;
- (id)streamError;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (id)initWithLength:(unsigned long long)a0 andThroughputDelegate:(id)a1;
- (void)signalProgress;

@end
