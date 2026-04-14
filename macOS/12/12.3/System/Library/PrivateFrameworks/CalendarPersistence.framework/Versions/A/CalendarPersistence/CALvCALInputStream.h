@class NSData;

@interface CALvCALInputStream : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _buffer;
    int _discard_buffer;
    unsigned int _seek;
    int _current_line_num;
    NSData *_dataStream;
}

- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (int)getLine:(char *)a0 withSize:(unsigned long long *)a1;
- (BOOL)isContinued;
- (int)lineNum;
- (int)load_line_buffer;
- (id)errorStr:(int)a0;

@end
