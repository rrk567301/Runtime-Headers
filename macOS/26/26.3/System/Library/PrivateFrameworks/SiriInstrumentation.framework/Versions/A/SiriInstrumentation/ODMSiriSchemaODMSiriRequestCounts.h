@class NSData;

@interface ODMSiriSchemaODMSiriRequestCounts : SISchemaInstrumentationMessage {
    struct { unsigned char allRequestCount : 1; unsigned char userRequestCount : 1; } _has;
}

@property (nonatomic) unsigned int allRequestCount;
@property (nonatomic) BOOL hasAllRequestCount;
@property (nonatomic) unsigned int userRequestCount;
@property (nonatomic) BOOL hasUserRequestCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAllRequestCount;
- (void)deleteUserRequestCount;

@end
