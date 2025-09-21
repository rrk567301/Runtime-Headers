@class ICNFMCMimePart;
@protocol ICNFIMAPMessage;

@interface ICNFIMAPMessageDownload : ICNFIMAPCompoundDownload {
    id<ICNFIMAPMessage> _message;
    unsigned char _usingPartialDownloads : 1;
    unsigned char _startedFetch : 1;
    unsigned char _fetchingBodyText : 1;
    unsigned char _doneAddingSubdownloads : 1;
}

@property (retain) ICNFMCMimePart *topLevelPart;
@property (retain) id<ICNFIMAPMessage> message;
@property char allowsPartialDownloads;
@property char writesCacheFile;

- (void)dealloc;
- (void).cxx_destruct;
- (id)data;
- (char)isComplete;
- (id)initWithMessage:(id)a0;
- (void)_addMimeSubdownloadsToPipeline:(id)a0 withCache:(id)a1;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (id)createCopy;
- (void)handleFetchResult:(id)a0;
- (void)processResults;

@end
