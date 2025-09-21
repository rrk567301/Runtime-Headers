@class NSOutputStream;

@interface AnalyticsCSVWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void)dealloc;
- (id)initWithOutputStream:(id)a0;
- (void).cxx_destruct;
- (void)finishLine;
- (void)writeComma;
- (void)writeField:(id)a0;
- (void)writeFields:(id)a0;

@end
