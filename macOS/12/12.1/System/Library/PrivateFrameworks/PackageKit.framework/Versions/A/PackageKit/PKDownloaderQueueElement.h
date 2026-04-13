@class PKPackageReference, NSString, PKDownload;

@interface PKDownloaderQueueElement : NSObject {
    PKPackageReference *_packageRef;
    NSString *_destination;
    PKDownload *_download;
    unsigned long long _downloadedBytes;
    unsigned long long _checksummedBytes;
    unsigned long long _progressIncrement;
}

- (void)dealloc;
- (id)description;
- (id)destination;
- (id)download;
- (id)packageReference;
- (unsigned long long)downloadedBytes;
- (void)setDownload:(id)a0;
- (id)initWithPackageReference:(id)a0 destination:(id)a1;
- (id)partialPath;
- (id)resumeDataPath;
- (void)_resetProgress;
- (void)_addToDownloadedBytes:(unsigned long long)a0;
- (unsigned long long)checksummedBytes;
- (void)_addToChecksummedBytes:(unsigned long long)a0;
- (unsigned long long)_reportedProgress;
- (unsigned long long)_getAndClearProgressIncrement;

@end
