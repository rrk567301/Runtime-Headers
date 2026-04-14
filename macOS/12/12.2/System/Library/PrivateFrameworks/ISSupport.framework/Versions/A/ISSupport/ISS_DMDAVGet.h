@class ISS__DMDAVGetToFileReader, NSData;

@interface ISS_DMDAVGet : ISS_DAVRequest {
    ISS__DMDAVGetToFileReader *_myReader;
    NSData *_myData;
    BOOL _readerInitialized;
}

+ (id)getRequestWithSession:(id)a0 URI:(id)a1 ifModifiedSince:(id)a2 includeRangeHeader:(BOOL)a3 rangeStart:(unsigned long long)a4 rangeEnd:(unsigned long long)a5 localDestination:(id)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (void)dealloc;
- (id)data;
- (void)finalizeOperation;
- (BOOL)readerInitialized;
- (id)initGetWithSession:(id)a0 URI:(id)a1 ifModifiedSince:(id)a2 includeRangeHeader:(BOOL)a3 rangeStart:(unsigned long long)a4 rangeEnd:(unsigned long long)a5 localDestination:(id)a6;
- (id)initGetWithSession:(id)a0 andEscapedURI:(id)a1;

@end
