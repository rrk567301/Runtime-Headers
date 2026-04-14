@class NSString;

@interface WBSUniqueFilenameEnumerator : NSEnumerator {
    NSString *_filenameWithoutExtension;
    NSString *_pathExtension;
    unsigned long long _iteration;
}

@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned long long fileNumber;

+ (id)writeUniqueFileAtURL:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)init;
- (id)nextObject;
- (id)initWithFilename:(id)a0;
- (id)writeUniqueFileInDirectoryAtURL:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;

@end
