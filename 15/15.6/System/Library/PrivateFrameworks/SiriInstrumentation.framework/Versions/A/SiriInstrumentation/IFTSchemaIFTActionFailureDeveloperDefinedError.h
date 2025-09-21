@class NSString, NSData;

@interface IFTSchemaIFTActionFailureDeveloperDefinedError : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; } _has;
}

@property (nonatomic) long long code;
@property (nonatomic) char hasCode;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) char hasDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCode;
- (void)deleteDomain;
- (id)suppressMessageUnderConditions;

@end
