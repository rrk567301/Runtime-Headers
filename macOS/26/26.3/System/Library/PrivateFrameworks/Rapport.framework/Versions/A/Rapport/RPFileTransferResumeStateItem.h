@class NSMutableDictionary;

@interface RPFileTransferResumeStateItem : NSObject {
    NSMutableDictionary *_fileInfo;
}

- (unsigned long long)bytesWritten;
- (unsigned long long)fileSize;
- (id)itemURL;
- (void)setFileSize:(unsigned long long)a0;
- (void)setFileName:(id)a0;
- (void)setItemURL:(id)a0;
- (id)error;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBytesWritten:(unsigned long long)a0;
- (void)setError:(id)a0;
- (id)fileName;
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
