@class NSError;
@protocol NSStreamDelegate;

@interface Anvil.FileDescriptorInputStream : NSInputStream {
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ eof;
    void /* unknown type, empty encoding */ err;
    void /* unknown type, empty encoding */ _delegate;
}

@property (nonatomic, readonly) BOOL hasBytesAvailable;
@property (nonatomic, readonly) unsigned long long streamStatus;
@property (nonatomic, readonly) NSError *streamError;
@property (nonatomic, retain) id<NSStreamDelegate> delegate;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)open;
- (id)initWithData:(id)a0;
- (void)close;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)getBuffer:(char **)a0 length:(long long *)a1;
- (long long)read:(char *)a0 maxLength:(long long)a1;

@end
