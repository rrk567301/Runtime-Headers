@class NSString, NSData;

@interface GMSSchemaGMSModelRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorDomain : 1; unsigned char gmsErrorCode : 1; unsigned char openAIErrorCode : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) unsigned int gmsErrorCode;
@property (nonatomic) BOOL hasGmsErrorCode;
@property (nonatomic) int openAIErrorCode;
@property (nonatomic) BOOL hasOpenAIErrorCode;
@property (copy, nonatomic) NSString *errorDomainString;
@property (nonatomic) BOOL hasErrorDomainString;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteErrorDomainString;
- (void)deleteGmsErrorCode;
- (void)deleteOpenAIErrorCode;

@end
