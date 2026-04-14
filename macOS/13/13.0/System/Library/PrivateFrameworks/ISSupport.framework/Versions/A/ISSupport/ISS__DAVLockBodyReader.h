@class NSMutableData, NSString;

@interface ISS__DAVLockBodyReader : NSObject <DAVResponseBodyReader> {
    NSMutableData *readData;
    NSString *lockToken;
    int timeout;
}

- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)data;
- (void)reset;
- (BOOL)request:(id)a0 acceptResponseWithHTTPStatusCode:(int)a1;
- (void)request:(id)a0 readResponseBody:(id)a1;
- (id)lockToken;
- (int)lockTimeout;
- (void)_calculateLockInfos;

@end
