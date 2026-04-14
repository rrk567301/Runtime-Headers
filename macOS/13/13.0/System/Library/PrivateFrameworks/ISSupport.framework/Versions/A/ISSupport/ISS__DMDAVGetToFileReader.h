@class NSString, ISS__DMDAVDataReader, NSFileHandle, ISS_DMDataFromFile;

@interface ISS__DMDAVGetToFileReader : NSObject <DAVResponseBodyReader> {
    NSString *_localPath;
    NSFileHandle *_fileHandle;
    ISS__DMDAVDataReader *_standardReader;
    ISS_DMDataFromFile *_mappedData;
    BOOL _useTempFile;
    NSString *_source;
    NSString *_destination;
}

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (id)data;
- (void)reset;
- (id)localPath;
- (id)mappedData;
- (BOOL)request:(id)a0 acceptResponseWithHTTPStatusCode:(int)a1;
- (void)request:(id)a0 readResponseBody:(id)a1;
- (id)initWithSourcePath:(id)a0 andLocalDestination:(id)a1;

@end
