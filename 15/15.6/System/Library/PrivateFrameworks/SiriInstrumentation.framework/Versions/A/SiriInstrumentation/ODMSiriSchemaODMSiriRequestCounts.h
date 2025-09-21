@class NSData;

@interface ODMSiriSchemaODMSiriRequestCounts : SISchemaInstrumentationMessage {
    struct { unsigned char allRequestCount : 1; unsigned char userRequestCount : 1; } _has;
}

@property (nonatomic) unsigned int allRequestCount;
@property (nonatomic) char hasAllRequestCount;
@property (nonatomic) unsigned int userRequestCount;
@property (nonatomic) char hasUserRequestCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAllRequestCount;
- (void)deleteUserRequestCount;
- (id)suppressMessageUnderConditions;

@end
