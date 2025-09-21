@class NSFileHandle;

@interface PCProtobufReader : NSObject {
    NSFileHandle *_fileHandle;
    BOOL _eofReached;
}

- (id)init;
- (BOOL)closeFile;
- (void).cxx_destruct;
- (id)findNextMessageStart;
- (BOOL)openFileWithName:(id)a0 error:(id *)a1;
- (BOOL)readRecord:(id *)a0 error:(id *)a1;
- (id)readRemainingBytes;
- (id)readUntilNextMessageStart;
- (id)unescapeMessage:(id)a0;

@end
