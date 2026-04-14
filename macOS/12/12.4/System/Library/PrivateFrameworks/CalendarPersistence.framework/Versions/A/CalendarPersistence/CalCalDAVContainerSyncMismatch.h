@class NSURL, NSString;

@interface CalCalDAVContainerSyncMismatch : NSObject

@property (retain) NSURL *url;
@property (retain) NSString *serverETag;
@property (retain) NSURL *folderURL;
@property (retain) NSString *cTag;
@property (retain) NSString *syncToken;
@property int mismatchType;

- (void).cxx_destruct;

@end
