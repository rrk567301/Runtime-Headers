@class NSMutableData;

@interface MIBUSerializer : NSObject

@property (retain, nonatomic) NSMutableData *data;

- (id)serializedData;
- (id)init;
- (void).cxx_destruct;
- (id)_getInnermostNSError:(id)a0;
- (BOOL)_serializeError:(id)a0 withErrorCodeTag:(id)a1 errorDomainTag:(id)a2 errorDescriptionTag:(id)a3 underlyingErrorTag:(id)a4;
- (id)_serializeValue:(id)a0 forTag:(id)a1;
- (id)_toJsonData:(id)a0;
- (BOOL)serialize:(id)a0 withValue:(id)a1;
- (BOOL)serializeOperationError:(id)a0;
- (BOOL)serializeResponseError:(id)a0;

@end
