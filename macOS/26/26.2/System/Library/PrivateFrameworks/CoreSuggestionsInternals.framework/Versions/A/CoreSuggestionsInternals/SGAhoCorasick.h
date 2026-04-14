@class NSData;

@interface SGAhoCorasick : NSObject {
    NSData *_bytecode;
    unsigned short _endPtr;
}

- (id)initWithBytecode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)existsInString:(id)a0;

@end
