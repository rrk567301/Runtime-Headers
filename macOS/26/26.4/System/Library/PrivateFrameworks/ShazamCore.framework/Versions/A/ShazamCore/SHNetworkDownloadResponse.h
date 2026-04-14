@class NSURL, NSError, NSURLResponse;

@interface SHNetworkDownloadResponse : NSObject

@property (readonly) NSURL *downloadedFileLocation;
@property (readonly) NSURLResponse *urlResponse;
@property (readonly) NSError *error;

- (void).cxx_destruct;
- (id)initWithDownloadedFileLocation:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
