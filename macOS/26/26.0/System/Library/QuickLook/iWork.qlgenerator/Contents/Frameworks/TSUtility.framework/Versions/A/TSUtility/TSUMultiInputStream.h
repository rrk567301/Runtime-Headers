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

- (void)setDelegate:(id)a0;
- (void)addInputStream:(id)a0;
- (id)propertyForKey:(id)a0;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)init;
- (void)open;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (id)streamError;
- (id)delegate;
- (void)close;
- (void).cxx_destruct;

@end
