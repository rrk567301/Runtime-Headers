@class NSFileHandle;

@interface PCProtobufWriter : NSObject {
    NSFileHandle *_fileHandle;
}

+ (id)convertData:(id)a0 error:(id *)a1;
+ (id)insertEscapeSequenceTo:(id)a0;

- (BOOL)writeRecord:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)closeFile;
- (void).cxx_destruct;
- (BOOL)openFileWithName:(id)a0 append:(BOOL)a1 error:(id *)a2;

@end
