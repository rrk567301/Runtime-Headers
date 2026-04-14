@class NSMutableData;

@interface ISS_DAVGetReader : NSObject <DAVResponseBodyReader> {
    NSMutableData *_data;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)data;
- (void)reset;
- (BOOL)request:(id)a0 acceptResponseWithHTTPStatusCode:(int)a1;
- (void)request:(id)a0 readResponseBody:(id)a1;

@end
