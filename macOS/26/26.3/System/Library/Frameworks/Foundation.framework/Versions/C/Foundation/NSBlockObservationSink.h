@interface NSBlockObservationSink : NSObservationSink {
    id _block;
    int _tag;
}

- (void)_receiveBox:(id)a0;
- (id)initWithBlock:(id)a0 tag:(int)a1;
- (void)dealloc;

@end
