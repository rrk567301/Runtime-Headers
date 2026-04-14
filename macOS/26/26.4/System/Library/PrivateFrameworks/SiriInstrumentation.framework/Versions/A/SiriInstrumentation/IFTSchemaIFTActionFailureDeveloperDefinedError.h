@class NSString, NSData;

@interface IFTSchemaIFTActionFailureDeveloperDefinedError : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; } _has;
}

@property (nonatomic) long long code;
@property (nonatomic) BOOL hasCode;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
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
- (void)deleteCode;
- (void)deleteDomain;

@end
