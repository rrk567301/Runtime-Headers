@class NSObject;
@protocol OS_dispatch_queue, NSStreamDelegate;

@interface NPTUploadDataStream : NSInputStream {
    unsigned long long remainingLength;
    unsigned long long status;
    NSObject<OS_dispatch_queue> *callBackQueue;
    id<NSStreamDelegate> _delegate;
}

- (id)delegate;
- (unsigned long long)streamStatus;
- (id)streamError;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)close;
- (void)setDelegate:(id)a0;
- (id)propertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void).cxx_destruct;
- (id)initWithLength:(unsigned long long)a0;

@end
