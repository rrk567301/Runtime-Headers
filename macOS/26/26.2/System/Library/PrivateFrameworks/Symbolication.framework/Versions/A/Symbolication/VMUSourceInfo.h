@class NSString;

@interface VMUSourceInfo : NSObject {
    NSString *_path;
    NSString *_fileName;
    unsigned int _lineNumber;
}

- (unsigned int)lineNumber;
- (id)fileName;
- (void).cxx_destruct;
- (id)path;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 address:(unsigned long long)a1;

@end
