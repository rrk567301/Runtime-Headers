@class NSFileHandle;

@interface PCProtobufWriter : NSObject {
    NSFileHandle *_fileHandle;
}

+ (id)convertData:(id)a0 error:(id *)a1;
+ (id)insertEscapeSequenceTo:(id)a0;

- (BOOL)closeFile;
- (BOOL)writeRecord:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)openFileWithName:(id)a0 append:(BOOL)a1 error:(id *)a2;

@end
