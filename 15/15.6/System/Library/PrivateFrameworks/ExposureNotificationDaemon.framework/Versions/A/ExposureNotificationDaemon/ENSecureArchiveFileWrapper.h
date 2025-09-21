@class NSString;

@interface ENSecureArchiveFileWrapper : NSObject {
    int _fileDescriptor;
}

@property (readonly, copy, nonatomic) NSString *path;

- (void).cxx_destruct;
- (void)close;
- (id)initWithPath:(id)a0;
- (char)openWithError:(id *)a0;
- (char)_writeObject:(id)a0 toFileDescriptor:(int)a1 error:(id *)a2;
- (char)readObject:(id *)a0 ofClass:(Class)a1 error:(id *)a2;
- (char)readObject:(id *)a0 ofClasses:(id)a1 error:(id *)a2;
- (char)saveObject:(id)a0 error:(id *)a1;

@end
