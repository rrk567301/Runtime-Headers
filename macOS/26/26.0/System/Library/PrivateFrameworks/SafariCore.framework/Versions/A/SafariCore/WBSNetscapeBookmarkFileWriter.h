@class NSMutableString, NSFileHandle;

@interface WBSNetscapeBookmarkFileWriter : NSObject {
    NSMutableString *_indentation;
}

@property (readonly, nonatomic) NSFileHandle *fileHandle;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)finishWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_writeData:(id)a0 error:(id *)a1;
- (BOOL)_writeString:(id)a0 error:(id *)a1;
- (BOOL)appendURLString:(id)a0 title:(id)a1 dateOfLastVisitIfReadingListItem:(id)a2 error:(id *)a3;
- (BOOL)closeFolderWithError:(id *)a0;
- (id)initWithFileHandle:(id)a0 error:(id *)a1;
- (BOOL)openFolder:(id)a0 identifier:(id)a1 error:(id *)a2;

@end
