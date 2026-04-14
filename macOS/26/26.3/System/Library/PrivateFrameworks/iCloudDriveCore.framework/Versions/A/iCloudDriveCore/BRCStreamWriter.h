@class NSOutputStream;

@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (id)initWithOutputStream:(id)a0;
- (void)close;
- (void)appendString:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
