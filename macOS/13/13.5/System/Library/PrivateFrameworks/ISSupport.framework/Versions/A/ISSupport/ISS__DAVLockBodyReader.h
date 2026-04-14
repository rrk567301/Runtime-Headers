@class NSMutableData, NSString;

@interface ISS__DAVLockBodyReader : NSObject <DAVResponseBodyReader> {
    NSMutableData *readData;
    NSString *lockToken;
    int timeout;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)data;
- (void)reset;
- (void)_calculateLockInfos;
- (int)lockTimeout;
- (id)lockToken;
- (BOOL)request:(id)a0 acceptResponseWithHTTPStatusCode:(int)a1;
- (void)request:(id)a0 readResponseBody:(id)a1;

@end
