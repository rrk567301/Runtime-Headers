@class NSData;

@interface HOMESchemaHOMEAssistantDeviceBirthday : SISchemaInstrumentationMessage {
    struct { unsigned char year : 1; unsigned char month : 1; } _has;
}

@property (nonatomic) unsigned int year;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) unsigned int month;
@property (nonatomic) BOOL hasMonth;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteMonth;
- (void)deleteYear;

@end
