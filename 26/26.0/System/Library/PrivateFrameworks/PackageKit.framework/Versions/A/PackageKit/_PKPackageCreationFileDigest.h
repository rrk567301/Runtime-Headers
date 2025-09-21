@class NSString, NSData;

@interface _PKPackageCreationFileDigest : NSObject {
    NSString *_filePath;
    NSData *_fileData;
    NSString *_digest;
    unsigned long long _readOptions;
}

- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)_fileDataWithError:(id *)a0;
- (id)fileDigestWithError:(id *)a0;
- (id)fileDigestWithError:(id *)a0 outFileData:(id *)a1;
- (id)initWithPath:(id)a0 readOptions:(unsigned long long)a1;

@end
