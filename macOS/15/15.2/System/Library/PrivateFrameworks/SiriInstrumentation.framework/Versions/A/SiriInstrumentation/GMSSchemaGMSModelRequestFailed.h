@class NSData;

@interface GMSSchemaGMSModelRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorDomain : 1; unsigned char gmsErrorCode : 1; unsigned char openAIErrorCode : 1; } _has;
}

@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) unsigned int gmsErrorCode;
@property (nonatomic) BOOL hasGmsErrorCode;
@property (nonatomic) int openAIErrorCode;
@property (nonatomic) BOOL hasOpenAIErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorDomain;
- (void)deleteGmsErrorCode;
- (void)deleteOpenAIErrorCode;
- (id)suppressMessageUnderConditions;

@end
