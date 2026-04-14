@class NSMutableData, NSString;

@interface ISS__DAVLockBodyReader : NSObject <DAVResponseBodyReader> {
    NSMutableData *readData;
    NSString *lockToken;
    int timeout;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)data;
- (void)reset;
- (id)lockToken;
- (int)lockTimeout;
- (BOOL)request:(id)a0 acceptResponseWithHTTPStatusCode:(int)a1;
- (void)request:(id)a0 readResponseBody:(id)a1;
- (void)_calculateLockInfos;

@end
