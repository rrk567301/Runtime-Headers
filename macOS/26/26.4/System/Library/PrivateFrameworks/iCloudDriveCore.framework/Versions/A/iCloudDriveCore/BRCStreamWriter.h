@class NSOutputStream;

@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void)appendString:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (void)close;
- (void)dealloc;

@end
