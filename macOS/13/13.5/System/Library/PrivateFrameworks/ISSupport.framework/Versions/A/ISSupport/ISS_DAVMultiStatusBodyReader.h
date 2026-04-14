@class NSMutableData, NSArray;

@interface ISS_DAVMultiStatusBodyReader : NSObject <DAVResponseBodyReader> {
    Class responseClass;
    NSMutableData *readData;
    NSArray *responses;
    NSArray *errors;
}

+ (id)multiStatusBodyReader;
+ (id)multiStatusBodyReaderWithResponseClass:(Class)a0;
+ (id)propFindBodyReader;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)data;
- (void)reset;
- (id)errors;
- (id)responses;
- (void)_calculateResponsesWithHTTPStatusCode:(int)a0;
- (id)initForPropFind;
- (id)initWithResponseClass:(Class)a0;
- (BOOL)request:(id)a0 acceptResponseWithHTTPStatusCode:(int)a1;
- (void)request:(id)a0 readResponseBody:(id)a1;

@end
