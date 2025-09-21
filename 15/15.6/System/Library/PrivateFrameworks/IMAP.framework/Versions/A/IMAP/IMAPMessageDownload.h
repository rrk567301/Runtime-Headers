@class MCMimePart, MCMessage;
@protocol IMAPMessage;

@interface IMAPMessageDownload : IMAPCompoundDownload {
    MCMessage<IMAPMessage> *_message;
    unsigned char _usingPartialDownloads : 1;
    unsigned char _startedFetch : 1;
    unsigned char _fetchingBodyText : 1;
    unsigned char _doneAddingSubdownloads : 1;
}

@property (retain) MCMimePart *topLevelPart;
@property (retain) MCMessage<IMAPMessage> *message;
@property char allowsPartialDownloads;
@property char writesCacheFile;
@property char dataWritten;
@property (readonly, nonatomic) char isPartial;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (id)data;
- (char)isComplete;
- (id)initWithMessage:(id)a0;
- (void)_addMimeSubdownloadsToPipeline:(id)a0 withCache:(id)a1;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (id)collectDataAndWriteToDisk:(char)a0;
- (id)createCopy;
- (char)handleFetchResult:(id)a0;
- (void)processResults;

@end
