@class NSURL, NSString;

@interface CalDAVScanResponse : NSObject

@property (retain) NSURL *fileURL;
@property (retain) NSString *etag;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 etag:(id)a1;

@end
