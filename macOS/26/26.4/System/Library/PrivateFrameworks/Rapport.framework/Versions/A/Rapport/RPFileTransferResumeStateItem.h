@class NSMutableDictionary;

@interface RPFileTransferResumeStateItem : NSObject {
    NSMutableDictionary *_fileInfo;
}

- (id)fileName;
- (void)setBytesWritten:(unsigned long long)a0;
- (id)error;
- (unsigned long long)bytesWritten;
- (void)setFileName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)fileSize;
- (void)setError:(id)a0;
- (id)itemURL;
- (void)dealloc;
- (void)setItemURL:(id)a0;
- (void)setFileSize:(unsigned long long)a0;
- (unsigned long long)fileModTimeNsec;
- (void)setFileModTime:(unsigned long long)a0;
- (id)fileInfo;
- (unsigned long long)fileModTime;
- (unsigned long long)fileOffset;
- (id)initWithFileTransferRequestDict:(id)a0;
- (id)initWithStateDict:(id)a0;
- (BOOL)outputFileItemUsable:(id)a0;
- (void)setFileModTimeNsec:(unsigned long long)a0;
- (void)setFileOffset:(unsigned long long)a0;
- (BOOL)sourceFileItemUsable:(id)a0;

@end
