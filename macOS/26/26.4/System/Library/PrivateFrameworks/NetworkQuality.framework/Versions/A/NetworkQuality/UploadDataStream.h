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

- (unsigned long long)streamStatus;
- (void)open;
- (id)streamError;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)delegate;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)hasBytesAvailable;
- (void).cxx_destruct;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDelegate:(id)a0;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)close;
- (id)initWithLength:(unsigned long long)a0 andThroughputDelegate:(id)a1;
- (void)signalProgress;

@end
