@class NSString, NSData;

@interface PNROnDeviceProvisionalPnRSiriRequestGrainDebugSummary : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *turnId;
@property (nonatomic) BOOL hasTurnId;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL hasErrorMessage;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorMessage;
- (void)deleteTurnId;

@end
