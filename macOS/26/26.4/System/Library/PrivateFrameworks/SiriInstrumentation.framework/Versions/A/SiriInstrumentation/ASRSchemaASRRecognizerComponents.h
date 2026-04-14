@class NSString, NSData;

@interface ASRSchemaASRRecognizerComponents : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *frontend;
@property (nonatomic) BOOL hasFrontend;
@property (copy, nonatomic) NSString *decodable;
@property (nonatomic) BOOL hasDecodable;
@property (copy, nonatomic) NSString *decoder;
@property (nonatomic) BOOL hasDecoder;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDecodable;
- (void)deleteDecoder;
- (void)deleteFrontend;

@end
