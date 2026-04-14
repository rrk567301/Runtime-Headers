@class NSData, NSDictionary;

@interface MIBUDeserializer : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long pos;
@property (retain, nonatomic) NSDictionary *tagValDict;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)_deserializeError:(id *)a0 withErrorCodeTag:(id)a1 errorDomainTag:(id)a2 errorDescriptionTag:(id)a3 underlyingErrorTag:(id)a4;
- (BOOL)_deserializeNextTag:(id *)a0 withData:(id *)a1;
- (id)_valueForTag:(id)a0 withData:(id)a1;
- (id)deserialize;
- (BOOL)deserializeOperationError:(id *)a0;
- (BOOL)deserializeResponseError:(id *)a0;

@end
