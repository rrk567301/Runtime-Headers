@class NSObject;
@protocol OS_dispatch_queue, NSStreamDelegate;

@interface NPTUploadDataStream : NSInputStream {
    unsigned long long remainingLength;
    unsigned long long status;
    NSObject<OS_dispatch_queue> *callBackQueue;
    id<NSStreamDelegate> _delegate;
}

- (void)setDelegate:(id)a0;
- (id)propertyForKey:(id)a0;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)open;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (id)streamError;
- (id)initWithLength:(unsigned long long)a0;
- (id)delegate;
- (void)close;
- (void).cxx_destruct;

@end
