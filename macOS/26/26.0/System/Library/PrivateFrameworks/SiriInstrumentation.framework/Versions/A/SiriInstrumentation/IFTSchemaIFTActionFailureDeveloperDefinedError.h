@class NSString, NSData;

@interface IFTSchemaIFTActionFailureDeveloperDefinedError : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; } _has;
}

@property (nonatomic) long long code;
@property (nonatomic) BOOL hasCode;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCode;
- (void)deleteDomain;

@end
