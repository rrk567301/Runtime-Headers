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

- (unsigned long long)streamStatus;
- (void)open;
- (id)streamError;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)addInputStream:(id)a0;
- (id)delegate;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)hasBytesAvailable;
- (void).cxx_destruct;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDelegate:(id)a0;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (id)init;
- (void)close;

@end
