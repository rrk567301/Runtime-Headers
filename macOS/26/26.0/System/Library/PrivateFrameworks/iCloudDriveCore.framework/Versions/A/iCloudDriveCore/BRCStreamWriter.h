@class NSOutputStream;

@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void)appendString:(id)a0;
- (void)dealloc;
- (id)initWithOutputStream:(id)a0;
- (void)close;
- (void).cxx_destruct;

@end
