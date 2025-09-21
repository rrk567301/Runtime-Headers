@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {
    NSOutputStream *_stream;
}

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (char)writeMessage:(id)a0;

@end
