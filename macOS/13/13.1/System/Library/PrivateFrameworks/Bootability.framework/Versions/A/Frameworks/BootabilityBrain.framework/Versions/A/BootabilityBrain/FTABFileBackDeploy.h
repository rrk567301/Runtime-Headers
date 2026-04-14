@class FTABSubfileBackDeploy, NSArray, NSMutableData, NSURL, NSData, NSMutableArray, NSFileHandle;

@interface FTABFileBackDeploy : NSObject <NSCopying> {
    NSData *_fileData;
    NSMutableArray *_subFileArray;
    NSFileHandle *_fileHandleWriteDestination;
    NSMutableData *_dataWriteDestination;
}

@property (readonly) const char *filePointer;
@property (readonly) unsigned long long fileLength;
@property (readonly) NSURL *url;
@property (readonly) unsigned int generation;
@property (readonly) unsigned int valid;
@property (readonly) NSData *bootNonce;
@property (readonly) NSData *magic;
@property (readonly) FTABSubfileBackDeploy *manifest;
@property (readonly) NSArray *subfiles;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)setManifest:(id)a0;
- (BOOL)writeToURL:(id)a0;
- (BOOL)writeBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)initFile;
- (BOOL)parseFileData;
- (BOOL)fileValidForOffset:(unsigned int)a0 length:(unsigned int)a1;
- (id)subfileWithTag:(id)a0;
- (void)removeSubfileWithTag:(id)a0;
- (BOOL)addSubfileWithTagName:(id)a0 contentsOfURL:(id)a1;
- (void)addSubfiles:(id)a0;
- (id)createFileHandleForWritingToURL:(id)a0;
- (BOOL)configureFileHandleWriteDestinationForURL:(id)a0;
- (void)configureDataWriteDestination;
- (BOOL)writeToDestination;
- (id)writeToData;
- (BOOL)writeSubfileToURL:(id)a0 tag:(id)a1;
- (BOOL)writeBytes:(const void *)a0 length:(unsigned long long)a1 handle:(id)a2;

@end
