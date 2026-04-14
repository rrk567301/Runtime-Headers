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

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)data;
- (void)reset;
- (id)errors;
- (id)responses;
- (BOOL)request:(id)a0 acceptResponseWithHTTPStatusCode:(int)a1;
- (void)request:(id)a0 readResponseBody:(id)a1;
- (id)initWithResponseClass:(Class)a0;
- (id)initForPropFind;
- (void)_calculateResponsesWithHTTPStatusCode:(int)a0;

@end
