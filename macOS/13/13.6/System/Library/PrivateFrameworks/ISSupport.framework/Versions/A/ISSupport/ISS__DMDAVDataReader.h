@class NSMutableData;

@interface ISS__DMDAVDataReader : NSObject <DAVResponseBodyReader> {
    NSMutableData *_data;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)data;
- (void)reset;
- (BOOL)request:(id)a0 acceptResponseWithHTTPStatusCode:(int)a1;
- (void)request:(id)a0 readResponseBody:(id)a1;

@end
