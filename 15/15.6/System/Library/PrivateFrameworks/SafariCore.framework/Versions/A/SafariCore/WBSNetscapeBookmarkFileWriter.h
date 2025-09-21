@class NSMutableString, NSFileHandle;

@interface WBSNetscapeBookmarkFileWriter : NSObject {
    NSMutableString *_indentation;
}

@property (readonly, nonatomic) NSFileHandle *fileHandle;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (char)finishWithError:(id *)a0;
- (char)_writeData:(id)a0 error:(id *)a1;
- (char)_writeString:(id)a0 error:(id *)a1;
- (char)appendURLString:(id)a0 title:(id)a1 error:(id *)a2;
- (char)closeFolderWithError:(id *)a0;
- (id)initWithFileHandle:(id)a0 error:(id *)a1;
- (char)openFolder:(id)a0 identifier:(id)a1 error:(id *)a2;

@end
