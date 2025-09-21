@class NSString, NSData;

@interface ASRSchemaASRRecognizerComponents : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *frontend;
@property (nonatomic) char hasFrontend;
@property (copy, nonatomic) NSString *decodable;
@property (nonatomic) char hasDecodable;
@property (copy, nonatomic) NSString *decoder;
@property (nonatomic) char hasDecoder;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDecodable;
- (void)deleteDecoder;
- (void)deleteFrontend;
- (id)suppressMessageUnderConditions;

@end
