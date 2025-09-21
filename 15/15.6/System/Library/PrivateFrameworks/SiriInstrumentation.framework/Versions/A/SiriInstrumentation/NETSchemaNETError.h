@class NSString, NSData;

@interface NETSchemaNETError : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) char hasDomain;
@property (copy, nonatomic) NSString *description;
@property (nonatomic) char hasDescription;
@property (nonatomic) long long errorCode;
@property (nonatomic) char hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteDescription;
- (void)deleteDomain;
- (id)suppressMessageUnderConditions;

@end
