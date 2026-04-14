@class NSString, NSData;

@interface IFTSchemaIFTActionFailureDeveloperDefinedError : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; } _has;
}

@property (nonatomic) long long code;
@property (nonatomic) BOOL hasCode;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCode;
- (void)deleteDomain;

@end
