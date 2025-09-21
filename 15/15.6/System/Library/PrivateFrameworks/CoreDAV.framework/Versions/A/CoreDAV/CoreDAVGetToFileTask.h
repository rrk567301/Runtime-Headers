@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask

@property (retain, nonatomic) NSFileHandle *destinationFile;

- (void).cxx_destruct;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithURL:(id)a0 destinationFile:(id)a1;
- (char)shouldLogResponseBody;

@end
