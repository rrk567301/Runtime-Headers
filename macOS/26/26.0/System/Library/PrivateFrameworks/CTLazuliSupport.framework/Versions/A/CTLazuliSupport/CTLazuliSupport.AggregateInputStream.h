@class NSError;
@protocol NSStreamDelegate;

@interface CTLazuliSupport.AggregateInputStream : NSInputStream {
    void /* unknown type, empty encoding */ streams;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ streamIterator;
    void /* unknown type, empty encoding */ currentStream;
    void /* unknown type, empty encoding */ underlyingStreamError;
}

@property (nonatomic, readonly) BOOL hasBytesAvailable;
@property (nonatomic, readonly) unsigned long long streamStatus;
@property (nonatomic, readonly) NSError *streamError;
@property (nonatomic, retain) id<NSStreamDelegate> delegate;

- (id)initWithData:(id)a0;
- (id)propertyForKey:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)open;
- (BOOL)getBuffer:(char **)a0 length:(long long *)a1;
- (long long)read:(char *)a0 maxLength:(long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initWithURL:(id)a0;
- (void)close;
- (void).cxx_destruct;

@end
