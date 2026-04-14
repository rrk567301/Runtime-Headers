@class NSOutputStream;

@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void)appendString:(id)a0;
- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;

@end
