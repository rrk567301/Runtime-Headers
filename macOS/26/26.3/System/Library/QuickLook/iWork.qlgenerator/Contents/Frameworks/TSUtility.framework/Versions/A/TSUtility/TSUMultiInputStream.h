@class NSString, NSDictionary, NSMutableArray;
@protocol NSStreamDelegate;

@interface TSUMultiInputStream : NSInputStream <NSStreamDelegate> {
    id<NSStreamDelegate> _delegate;
    NSDictionary *_properties;
    NSMutableArray *_inputStreams;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)streamStatus;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)close;
- (id)streamError;
- (id)init;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (void)addInputStream:(id)a0;

@end
