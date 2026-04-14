@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {
    NSOutputStream *_stream;
}

- (void).cxx_destruct;
- (BOOL)writeMessage:(id)a0;
- (id)initWithOutputStream:(id)a0;

@end
